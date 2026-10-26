module Mem_interface_tb();
    logic clk, rst_n;
    logic load_slot, feed, row_slot, en, done;
    logic [1:0] row_idx;
    logic [1:0] entry_valid;
    logic in_valid;
    logic [35:0] a_packed, b_packed;
    logic [3:0] a_skewed [3];
    logic skewed_slot [3];
    logic [3:0] b_out [3][3];
    logic [9:0] results_in [3];
    logic [89:0] results_packed;
    logic out_valid;

    Mem_interface dut (.*);

    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, Mem_interface_tb);
    end

    int checks = 0, errors = 0, test_errors = 0;

    int m;
    logic [3:0] A [3][3];
    logic [3:0] A2 [3][3];
    logic [3:0] B [3][3];
    logic [3:0] B2 [3][3];

    function
        automatic logic [35:0] pack(input logic [3:0] M [3][3]);
        logic [35:0] p;
        for (int i = 0; i < 3; i++) begin
            for(int j = 0; j < 3; j++) begin
                p[4*(3*i + j) + 3: 4*(3*i + j)] = M[i][j];
            end
        end
        return p;
    endfunction

    initial begin
            A = '{'{4'h1, 4'h2, 4'h3},
                '{4'h4, 4'h5, 4'h6},
                '{4'h7, 4'h8, 4'h9}};

            A2 = '{'{4'h9, 4'h8, 4'h7},
                '{4'h6, 4'h5, 4'h4},
                '{4'h3, 4'h2, 4'h1}};

            B = '{'{4'h1, 4'h0, 4'h2},
                '{4'h3, 4'h1, 4'h0},
                '{4'h0, 4'h2, 4'h1}};

            B2 = '{'{4'h2, 4'h1, 4'h0},
                '{4'h0, 4'h3, 4'h1},
                '{4'h1, 4'h0, 4'h2}};

            rst_n = 0;
            load_slot = 0;
            feed = 0;
            row_slot = 0;
            en = 0;
            done = 0;
            row_idx = 0;
            in_valid = 0;
            a_packed = '0;
            b_packed = '0;
            results_in = '{default: '0};
            repeat(2) @(negedge clk);
            rst_n = 1;

            // Test 1: two in_valid pulses fill spot 0 then spot 1, a third is ignored
            test_errors = errors;

            @(negedge clk);
            in_valid = 1;
            a_packed = pack(A);
            b_packed = pack(B);

            @(negedge clk);
            a_packed = pack(A2);
            b_packed = pack(B2);
            checks++;
            if (entry_valid !== 2'b01) begin
                errors++;
                $error("[%0t] after first in_valid: entry_valid=%b, expected 01", $time, entry_valid);
            end

            @(negedge clk);
            a_packed = pack(B2);   // junk for the third pulse, should not be stored
            b_packed = pack(A);
            checks++;
            if (entry_valid !== 2'b11) begin
                errors++;
                $error("[%0t] after second in_valid: entry_valid=%b, expected 11", $time, entry_valid);
            end

            @(negedge clk);
            in_valid = 0;

            // b_out should show B for slot 0 and B2 for slot 1, and the third pulse changed nothing
            for (int s = 0; s < 2; s++) begin
                load_slot = s[0];
                #1;
                for (int i = 0; i < 3; i++) begin
                    for (int j = 0; j < 3; j++) begin
                        checks++;
                        if (b_out[i][j] !== (s == 0 ? B[i][j] : B2[i][j])) begin
                            errors++;
                            $error("[%0t] b_out[%0d][%0d] for slot %0d: got %0d, expected %0d",
                                $time, i, j, s, b_out[i][j], (s == 0 ? B[i][j] : B2[i][j]));
                        end
                        checks++;
                        if (dut.A_buf[s][i][j] !== (s == 0 ? A[i][j] : A2[i][j])) begin
                            errors++;
                            $error("[%0t] A_buf[%0d][%0d][%0d]: got %0d, expected %0d",
                                $time, s, i, j, dut.A_buf[s][i][j], (s == 0 ? A[i][j] : A2[i][j]));
                        end
                    end
                end
            end

            if (errors == test_errors) $display("Test 1 passed: two jobs captured, third ignored");
            else $display("Test 1 FAILED: job capture");

            // Test 2: feed A from spot 0 then A2 from spot 1, check the skew
            // row fed at cycle k, lane r shows row k - r
            test_errors = errors;

            en = 1;
            for (int k = 0; k < 8; k++) begin
                @(negedge clk);
                feed = (k < 6);
                row_slot = (k >= 3);
                row_idx = 2'(k % 3);
                #1;

                for (int r = 0; r < 3; r++) begin
                    m = k - r;   // stream row on lane r right now, 0-2 is A, 3-5 is A2
                    if (m >= 0 && m < 6) begin
                        checks++;
                        if (a_skewed[r] !== (m < 3 ? A[m][r] : A2[m-3][r]) || skewed_slot[r] !== (m >= 3)) begin
                            errors++;
                            $error("[%0t] k=%0d lane %0d: a=%0d slot=%0d, expected a=%0d slot=%0d",
                                $time, k, r, a_skewed[r], skewed_slot[r],
                                (m < 3 ? A[m][r] : A2[m-3][r]), (m >= 3));
                        end
                    end
                end
            end
            feed = 0;
            en = 0;

            if (errors == test_errors) $display("Test 2 passed: row select and skew");
            else $display("Test 2 FAILED: row select and skew");

            // Test 3: done clears the buffer, next in_valid goes back into spot 0
            test_errors = errors;

            @(negedge clk);
            done = 1;
            @(negedge clk);
            done = 0;
            checks++;
            if (entry_valid !== 2'b00) begin
                errors++;
                $error("[%0t] after done: entry_valid=%b, expected 00", $time, entry_valid);
            end

            in_valid = 1;
            a_packed = pack(A2);
            b_packed = pack(B2);
            @(negedge clk);
            in_valid = 0;
            load_slot = 0;
            #1;
            checks++;
            if (entry_valid !== 2'b01 || b_out[0][0] !== B2[0][0]) begin
                errors++;
                $error("[%0t] after done + in_valid: entry_valid=%b b_out[0][0]=%0d, expected 01 and %0d",
                    $time, entry_valid, b_out[0][0], B2[0][0]);
            end

            if (errors == test_errors) $display("Test 3 passed: done clears the buffer");
            else $display("Test 3 FAILED: done clear");

            rst_n = 0;
            repeat(2) @(negedge clk);
            rst_n = 1;

            // Test 4: output collection. feed 3 rows of one job, fake the array's outputs,
            // and check the tags put each value in the right spot of C.
            // row fed at k comes out of column c at k + c + 3. fake value = 10*row + c + 1
            test_errors = errors;

            en = 1;
            for (int k = 0; k < 10; k++) begin
                @(negedge clk);

                // out_valid reflects the last edge, should only pulse once, at k = 8
                checks++;
                if (out_valid !== (k == 8)) begin
                    errors++;
                    $error("[%0t] k=%0d: out_valid=%0d, expected %0d", $time, k, out_valid, (k == 8));
                end

                if (k == 8) begin
                    for (int i = 0; i < 3; i++) begin
                        for (int j = 0; j < 3; j++) begin
                            checks++;
                            if (results_packed[10*(3*i + j) +: 10] !== 10'(10*i + j + 1)) begin
                                errors++;
                                $error("[%0t] C[%0d][%0d]: got %0d, expected %0d",
                                    $time, i, j, results_packed[10*(3*i + j) +: 10], 10*i + j + 1);
                            end
                        end
                    end
                end

                feed = (k < 3);
                row_slot = 0;
                row_idx = 2'(k);

                for (int c = 0; c < 3; c++) begin
                    m = k - c - 3;
                    results_in[c] = (m >= 0 && m < 3) ? 10'(10*m + c + 1) : 10'h3FF; // 3FF = junk
                end
            end
            en = 0;

            if (errors == test_errors) $display("Test 4 passed: output collection and out_valid");
            else $display("Test 4 FAILED: output collection");

            if (errors == 0) $display("PASS: %0d checks", checks);
            else $display("FAIL: %0d errors in %0d checks", errors, checks);

            $finish;
        end

    endmodule