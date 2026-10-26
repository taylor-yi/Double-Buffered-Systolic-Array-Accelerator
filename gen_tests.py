"""
File layout:
    <number of tests>
    then for each test:
    <jobs> <gap>          jobs = 1 or 2, gap = cycles between the two in_valid pulses
    <A, 9 values>         row major: a11 a12 a13 a21 ... a33
    <B, 9 values>
    <C, 9 values>         expected A x B
    (A, B, C again for job 2 if jobs = 2)
"""

import argparse
import random

SIZE = 3
MAX_VAL = 15      # 4 bit unsigned
MAX_GAP = 4       # job 2 has to land in the buffer before job 1 finishes feeding, so 4 is the max cycle gap between jobs


def matmul(A, B):
    C = [[0] * SIZE for _ in range(SIZE)]
    for i in range(SIZE):
        for j in range(SIZE):
            for k in range(SIZE):
                C[i][j] += A[i][k] * B[k][j]
    return C


def flat(M):
    return " ".join(str(x) for row in M for x in row)


def rand_matrix(rng):
    return [[rng.randint(0, MAX_VAL) for _ in range(SIZE)] for _ in range(SIZE)]


def fill(v):
    return [[v] * SIZE for _ in range(SIZE)]


IDENTITY = [[1 if i == j else 0 for j in range(SIZE)] for i in range(SIZE)]


def directed_tests():
    A1 = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
    B1 = [[1, 0, 2], [3, 1, 0], [0, 2, 1]]
    A2 = [[9, 8, 7], [6, 5, 4], [3, 2, 1]]
    B2 = [[2, 1, 0], [0, 3, 1], [1, 0, 2]]

    return [
        # name, gap, list of (A, B)
        ("two consecutive (spec page 11)", 1, [(A1, B1), (A2, B2)]),
        ("max values, every C = 675",      1, [(fill(15), fill(15)), (fill(15), fill(15))]),
        ("identity then all zeros",        1, [(A1, IDENTITY), (fill(0), B2)]),
        ("single job",                     1, [(A1, B1)]),
        ("job 2 arrives as late as it can", MAX_GAP, [(A1, B1), (A2, B2)]),
    ]


def random_tests(rng, n):
    tests = []
    for t in range(n):
        jobs = 2 if rng.random() < 0.8 else 1
        gap = rng.randint(1, MAX_GAP)
        pairs = [(rand_matrix(rng), rand_matrix(rng)) for _ in range(jobs)]
        tests.append((f"random {t}", gap, pairs))
    return tests


def main():
    p = argparse.ArgumentParser()
    p.add_argument("--random", type=int, default=20, help="number of random tests")
    p.add_argument("--seed", type=int, default=1)
    p.add_argument("--out", default="tests.txt")
    args = p.parse_args()

    rng = random.Random(args.seed)
    tests = directed_tests() + random_tests(rng, args.random)

    with open(args.out, "w") as f:
        f.write(f"{len(tests)}\n")
        for name, gap, pairs in tests:
            f.write(f"{len(pairs)} {gap}\n")
            for A, B in pairs:
                C = matmul(A, B)
                assert max(max(r) for r in C) <= 675, "C should never need more than 10 bits"
                f.write(flat(A) + "\n")
                f.write(flat(B) + "\n")
                f.write(flat(C) + "\n")

    print(f"wrote {len(tests)} tests to {args.out} (seed {args.seed})")
    for n, (name, gap, pairs) in enumerate(tests):
        print(f"  test {n}: {name}, {len(pairs)} job(s), gap {gap}")


if __name__ == "__main__":
    main()
