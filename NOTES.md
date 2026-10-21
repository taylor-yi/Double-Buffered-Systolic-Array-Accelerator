Levels:

Systolic Top Level
 > Controller
 > Input Staging
 > Array
    > Processing Element x 9
        > Adder
        > Multiplier
> Output Capture

Specs:
- Weight stationary architecture
- 4 bit unsigned inputs
- 9 bit output > CORRECTED: 10 bit output
- 3x3 hardcoded at the top level, lower level modules can be parameterized

- A and B matrices are loaded in when in_valid is asserted. Internal buffering and scheduling to feed data into the PEs in pipelined design will be designed.

Assumptions and Optimizations to make: 
- No infinity or NaN cases
- If an element is 0 the output can be forwarded
- Direct load, at scale we might pipeline the weights but for this size it wouldn't save any time anyways

Solution to back to back solves: 
- Have 2 weight slots in each processing element
- Start loading the next weights while the current one is still computing
- When run 1 is done, flip weight slots, don't waste time loading the next weights in


Processing Element Design:
Inputs: clk, rst_n, A, B, in_valid, slot
Outputs: C (A and B multiplication accumulator)

Slot will be the signal that notates which register weights B will be written to. If 0, slot 1, if 1 slot 2. This should enable us to even do continuous matrix multiplications not just 2 in a row. We will have to have a clear feature that clears the other slot too. A data passes "right" and accumulator result passes "down" (maybe hardwired drain too though).
        
        Above Wire
         _______
        |       |
 A2>>   |  PE   | >> A1 (weights stream left to right)
        |_______|
            \/
        Result

Tests:
1. Reset priority
2. Weight loading
3. b_out weight shift chain
4. active weight select
5. MAC correctness
6. zero gating
7. boundary and overflow
8. enable behavior
9. activation forwarding
10. back to back streaming
11. load while computing
12. hazard
13. x propagation
