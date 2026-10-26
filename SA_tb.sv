`timescale 1ns/1ps
// Systolic Array Testbench
module SA_tb ();
    logic clk, rst_n, en, w_load, load_slot;
    logic slot_in [3];
    logic [3:0] a_in [3];
    logic [3:0] b_in [3][3];
    logic [9:0] result_matrix [3];

    Systolic_Array dut (.*);

    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    int errors = 0, checks = 0, test_errors;
    logic [3:0] hist [3][3];
    logic [3:0] A [3][3];
    logic [3:0] W [3][3];
    int C_exp [3][3]; //result reference

    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, SA_tb);
    end

    // Hook up copy systolic array to iterate over constant variables
    logic [3:0] pe_a [3][3];
    //Copy a
    for (genvar i = 0; i < 3; i++) begin : tap_r
        for (genvar j = 0; j < 3; j++) begin : tap_c
            assign pe_a[i][j] = dut.row[i].col[j].PE.a;
        end
    end

    //Copy b, slots 1 and 2
    logic [3:0] pe_b1 [3][3];
    logic [3:0] pe_b2 [3][3];

    //Test 3 temp vars
    logic [3:0] expected_temp;

    for (genvar i = 0; i < 3; i++) begin : tap_b_r
        for (genvar j = 0; j < 3; j++) begin : tap_b_c
            assign pe_b1[i][j] = dut.row[i].col[j].PE.b1;
            assign pe_b2[i][j] = dut.row[i].col[j].PE.b2;
        end
    end

    logic [3:0] A2 [3][3];
    logic [3:0] W2 [3][3];
    int C_exp2 [3][3];
    int m;
    int test_num = 0;

    initial begin
        test_errors = errors;

        rst_n = 0;
        en = 0;
        w_load = 0;
        load_slot = 0;
        slot_in = '{default: 1'b0};
        a_in = '{default: '0};
        b_in = '{default: '0};
        
        // Test 1: check a_in load correctly
        @(negedge clk);
        test_num += 1;
        rst_n = 1;
        en = 1;
        w_load = 0;
        load_slot = 1;
        slot_in = '{default: 1'b0}; // different slots, avoids the hazard assertion
        a_in = '{default: '0};

        // let zeros flush through all 3 columns, then check
        repeat (3) @(negedge clk);
        for (int i = 0; i < 3; i++) begin
            for (int j = 0; j < 3; j++) begin
                checks++;
                if (pe_a[i][j] !== 4'h0) begin
                    errors++;
                    $error("[%0t] PE[%0d][%0d].a: expected 0, got %0d", $time, i, j, pe_a[i][j]);
                end
            end
        end

        // stream a new distinct value into every row each cycle
        // hist[k][r] = value driven into a_in[r] k cycles ago
        for (int t = 0; t < 5; t++) begin
            @(negedge clk);
            hist[2] = hist[1];
            hist[1] = hist[0];
            for (int r = 0; r < 3; r++)
                hist[0][r] = 4'(t*3 + r + 1);   // 1..15, all distinct
            a_in = hist[0];

            #1; // let the combinational input settle before checking

            if (t >= 2) begin // after 3 drives, history is full
                for (int i = 0; i < 3; i++) begin
                    for (int j = 0; j < 3; j++) begin
                        checks++;
                        if (pe_a[i][j] !== hist[j][i]) begin
                            errors++;
                            $error("[%0t] PE[%0d][%0d].a: expected %0d, got %0d", $time, i, j, hist[j][i], pe_a[i][j]);
                        end
                    end
                end
            end
        end

        if (errors == test_errors) $display("Test 1 passed: activations propagate correctly");
        else $display("Test 1 FAILED: activation propagation");

        repeat(3) @(posedge clk);

        // Test 2, check b is loading correctly
        @(negedge clk);
        test_num += 1;
        rst_n = 1;
        en = 0;
        w_load = 1; 
        load_slot = 0; // load b1 with 1s
        slot_in = '{default: 1'b1}; // different slots, avoids the hazard assertion
        b_in = '{'{4'h1, 4'h1, 4'h1},
                '{4'h1, 4'h1, 4'h1},
                '{4'h1, 4'h1, 4'h1}};
        
        @(negedge clk); 
        load_slot = 1; //load b2 with 1s
        slot_in = '{default: 1'b0};
        for (int i = 0; i < 3; i++) begin
            for (int j = 0; j < 3; j++) begin
                if (pe_b1[i][j] !== 4'h1) begin //check b1
                    errors++;
                    $error("[%0t] PE[%0d][%0d].b1: expected 1, got %0d", $time, i, j, pe_b1[i][j]);
                end
            end
        end

        @(negedge clk);
        load_slot = 0; //load b1 with 0s
        slot_in = '{default: 1'b1};
        b_in = '{'{4'h0, 4'h0, 4'h0},
                '{4'h0, 4'h0, 4'h0},
                '{4'h0, 4'h0, 4'h0}};
        for (int i = 0; i < 3; i++) begin
            for (int j = 0; j < 3; j++) begin
                if (pe_b2[i][j] !== 4'h1) begin //check b2
                    errors++;
                    $error("[%0t] PE[%0d][%0d].b2: expected 0, got %0d", $time, i, j, pe_b2[i][j]);
                end
            end
        end

        @(negedge clk);
        load_slot = 1; //load b2 with 0s
        slot_in = '{default: 1'b0};
        for (int i = 0; i < 3; i++) begin
            for (int j = 0; j < 3; j++) begin
                if (pe_b1[i][j] !== 4'h0) begin //check b1
                    errors++;
                    $error("[%0t] PE[%0d][%0d].b1: expected 0, got %0d", $time, i, j, pe_b1[i][j]);
                end
            end
        end

        @(negedge clk);
        load_slot = 1; //load b2 with 0s
        slot_in = '{default: 1'b0};
        for (int i = 0; i < 3; i++) begin
            for (int j = 0; j < 3; j++) begin
                if (pe_b2[i][j] !== 4'h0) begin //check b1
                    errors++;
                    $error("[%0t] PE[%0d][%0d].b2: expected 0, got %0d", $time, i, j, pe_b2[i][j]);
                end
            end
        end

        if (errors == test_errors) $display("Test 2 passed: b1 and b2 loaded correctly with both 1s and 0s");
        else $display("Test 2 FAILED: b registers not loaded correctly");

        repeat(3) @(posedge clk);

        // Test 3: basic mat mult
        test_num += 1;
        @(negedge clk);
        A = '{'{4'h1, 4'h2, 4'h3},
            '{4'h4, 4'h5, 4'h6},
            '{4'h7, 4'h8, 4'h9}};

        W = '{'{4'h1, 4'h0, 4'h2},
            '{4'h3, 4'h1, 4'h0},
            '{4'h0, 4'h2, 4'h1}};

        for (int i = 0; i < 3; i++) begin
            for (int j = 0; j < 3; j++) begin
                C_exp[i][j] = 0;
                for (int r = 0; r < 3; r++)
                    C_exp[i][j] += A[i][r] * W[r][j];
            end
        end

        // hold compute while loading with en low
        @(negedge clk);
        en = 0;
        w_load = 1;
        load_slot = 0;
        slot_in = '{default: 1'b1};
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                b_in[i][j] = W[i][j];

                @(negedge clk);
                w_load = 0;
                load_slot = 1;
                slot_in = '{default: 1'b0};
                en = 1;
                a_in = '{default: '0};

                repeat(3) @(negedge clk);

                // stream A in with skew: row r of the array gets A[i][r] at cycle i + r
                // C[i][c] comes out the bottom of column c at cycle i + c + 3
                for (int k = 0; k < 8; k++) begin
                    @(negedge clk);

                    // check outputs registered on the last edge
                    for (int c = 0; c < 3; c++) begin
                        if (k - 3 - c >= 0 && k - 3 - c < 3) begin
                            checks++;
                            if (result_matrix[c] !== 10'(C_exp[k-3-c][c])) begin
                                errors++;
                                $error("[%0t] C[%0d][%0d]: expected %0d, got %0d",
                                    $time, k-3-c, c, C_exp[k-3-c][c], result_matrix[c]);
                            end
                        end
                    end

                    // drive the next skewed column of inputs
                    for (int r = 0; r < 3; r++)
                        a_in[r] = (k - r >= 0 && k - r < 3) ? A[k-r][r] : 4'h0;
                end
        if (errors == test_errors) $display("Test 3 passed: 3x3 matrix multiply correct");
        else $display("Test 3 FAILED: matrix multiply");
        
        repeat(3) @(negedge clk);

        // Test 4: Distinct weight loading
        test_num += 1;
        en = 0;
        w_load = 1; 
        load_slot = 0; // load b1
        slot_in = '{default: 1'b1}; // different slots, avoids the hazard assertion
        b_in = '{'{4'b0000, 4'b0001, 4'b0010}, //distinction: row col, {row, col}, in 2 bit notations.
                '{4'b0100, 4'b0101, 4'b0110},
                '{4'b1000, 4'b1001, 4'b1010}};
        
        @(negedge clk);
        for (int i = 0; i < 3; i++) begin
            for (int j = 0; j < 3; j++) begin
                expected_temp = {i[1:0], j[1:0]};
                b_in[i][j] = ~b_in[i][j]; //in same breath, invert bits to get a different set of unique bits
                if (pe_b1[i][j] !== expected_temp) begin //check b1
                    errors++;
                    $error("[%0t] PE[%0d][%0d].b1: expected %0d, got %0d", $time, i, j, expected_temp, pe_b1[i][j]);
                end
            end
        end

        load_slot = 1;
        slot_in = '{default: 1'b0};

        @(negedge clk);
        for(int i = 0; i < 3; i++) begin
            for(int j = 0; j < 3; j++) begin
                expected_temp = {i[1:0], j[1:0]};
                expected_temp = ~expected_temp;
                if (pe_b2[i][j] !== expected_temp) begin //check b1
                    errors++;
                    $error("[%0t] PE[%0d][%0d].b2: expected %0d, got %0d", $time, i, j, expected_temp, pe_b1[i][j]);
                end
            end
        end
        
        if (errors == test_errors) $display("Test 4 passed: b1 and b2 loaded distinct values");
        else $display("Test 2 FAILED: b registers not loaded correctly");

        repeat(3) @(negedge clk);
        rst_n = 0;
        // Test 5: Max values
        test_num += 1;
        @(negedge clk);
        rst_n = 1;
        en = 0;
        A = '{'{4'hf, 4'hf, 4'hf},
            '{4'hf, 4'hf, 4'hf},
            '{4'hf, 4'hf, 4'hf}};

        W = '{'{4'hf, 4'hf, 4'hf},
            '{4'hf, 4'hf, 4'hf},
            '{4'hf, 4'hf, 4'hf}};

        for (int i = 0; i < 3; i++) begin
            for (int j = 0; j < 3; j++) begin
                C_exp[i][j] = 0;
                for (int r = 0; r < 3; r++)
                    C_exp[i][j] += A[i][r] * W[r][j];
            end
        end
        @(negedge clk);
        w_load = 1;
        load_slot = 0;
        slot_in = '{default: 1'b1};
        for (int i = 0; i < 3; i++) begin
            for (int j = 0; j < 3; j++) begin
                b_in[i][j] = W[i][j];

            end
        end

        @(negedge clk);
        w_load = 0;
        load_slot = 1;
        slot_in = '{default: 1'b0};
        en = 1;
        a_in = '{default: '0};

        repeat(3) @(negedge clk);

        // stream A in with skew: row r of the array gets A[i][r] at cycle i + r
        // C[i][c] comes out the bottom of column c at cycle i + c + 3
        for (int k = 0; k < 8; k++) begin
            @(negedge clk);

            // check outputs registered on the last edge
            for (int c = 0; c < 3; c++) begin
                if (k - 3 - c >= 0 && k - 3 - c < 3) begin
                    checks++;
                    if (result_matrix[c] !== 10'(C_exp[k-3-c][c])) begin
                        errors++;
                        $error("[%0t] C[%0d][%0d]: expected %0d, got %0d", $time, k-3-c, c, C_exp[k-3-c][c], result_matrix[c]);
                    end
                end
            end

                    // drive the next skewed column of inputs
            for (int r = 0; r < 3; r++) begin
                a_in[r] = (k - r >= 0 && k - r < 3) ? A[k-r][r] : 4'h0;
            end
        end

        if (errors == test_errors) $display("Test 5 passed: Max matrix multiply correct");
        else $display("Test 5 FAILED: Max matrix multiply");

        repeat(3) @(negedge clk);

        // Test 6: back to back
        test_num += 1;
        test_errors = errors;

        A = '{'{4'h1, 4'h2, 4'h3},
              '{4'h4, 4'h5, 4'h6},
              '{4'h7, 4'h8, 4'h9}};

        W = '{'{4'h1, 4'h0, 4'h2},
              '{4'h3, 4'h1, 4'h0},
              '{4'h0, 4'h2, 4'h1}};

        W2 = '{'{4'h2, 4'h1, 4'h0},
               '{4'h0, 4'h3, 4'h1},
               '{4'h1, 4'h0, 4'h2}};

        for (int i = 0; i < 3; i++) begin
            for (int j = 0; j < 3; j++) begin
                C_exp[i][j] = 0;
                C_exp2[i][j] = 0;
                for (int r = 0; r < 3; r++) begin
                    C_exp[i][j] += A[i][r] * W[r][j];
                    C_exp2[i][j] += A[i][r] * W2[r][j];
                end
            end
        end

        // load W into slot 0, en low
        @(negedge clk);
        en = 0;
        w_load = 1;
        load_slot = 0;
        slot_in = '{default: 1'b1};
        for (int i = 0; i < 3; i++) begin
            for (int j = 0; j < 3; j++) begin
                b_in[i][j] = W[i][j];
            end
        end

        @(negedge clk);
        w_load = 0;
        load_slot = 1;
        slot_in = '{default: 1'b0};
        en = 1;
        a_in = '{default: '0};

        repeat(3) @(negedge clk);

        // compute A x W with slot 0, load W2 into slot 1 partway through
        for (int k = 0; k < 8; k++) begin
            @(negedge clk);

            for (int c = 0; c < 3; c++) begin
                if (k - 3 - c >= 0 && k - 3 - c < 3) begin
                    checks++;
                    if (result_matrix[c] !== 10'(C_exp[k-3-c][c])) begin
                        errors++;
                        $error("[%0t] slot 0 C[%0d][%0d]: expected %0d, got %0d", $time, k-3-c, c, C_exp[k-3-c][c], result_matrix[c]);
                    end
                end
            end

            for (int r = 0; r < 3; r++) begin
                a_in[r] = (k - r >= 0 && k - r < 3) ? A[k-r][r] : 4'h0;
            end

            // load W2 mid stream
            if (k == 1) begin
                w_load = 1;
                load_slot = 1;
                for (int i = 0; i < 3; i++) begin
                    for (int j = 0; j < 3; j++) begin
                        b_in[i][j] = W2[i][j];
                    end
                end
            end
            if (k == 2) w_load = 0;
        end

        // both slots should have their own weights
        for (int i = 0; i < 3; i++) begin
            for (int j = 0; j < 3; j++) begin
                checks++;
                if (pe_b1[i][j] !== W[i][j]) begin
                    errors++;
                    $error("[%0t] PE[%0d][%0d].b1: expected %0d, got %0d", $time, i, j, W[i][j], pe_b1[i][j]);
                end
                checks++;
                if (pe_b2[i][j] !== W2[i][j]) begin
                    errors++;
                    $error("[%0t] PE[%0d][%0d].b2: expected %0d, got %0d", $time, i, j, W2[i][j], pe_b2[i][j]);
                end
            end
        end

        // swap and compute A x W2 with slot 1
        slot_in = '{default: 1'b1};
        load_slot = 0;
        a_in = '{default: '0};

        repeat(3) @(negedge clk);

        for (int k = 0; k < 8; k++) begin
            @(negedge clk);

            for (int c = 0; c < 3; c++) begin
                if (k - 3 - c >= 0 && k - 3 - c < 3) begin
                    checks++;
                    if (result_matrix[c] !== 10'(C_exp2[k-3-c][c])) begin
                        errors++;
                        $error("[%0t] slot 1 C[%0d][%0d]: expected %0d, got %0d", $time, k-3-c, c, C_exp2[k-3-c][c], result_matrix[c]);
                    end
                end
            end

            for (int r = 0; r < 3; r++) begin
                a_in[r] = (k - r >= 0 && k - r < 3) ? A[k-r][r] : 4'h0;
            end
        end

        if (errors == test_errors) $display("Test 6 passed: ping pong load during compute");
        else $display("Test 6 FAILED: ping pong");

        repeat(3) @(negedge clk);

        // Test 7: back to back. A x W from slot 0, then A2 x W2 from slot 1, no gap.
        // stream rows: 0-2 are A, 3-5 are A2
        // slot_in goes in with each row, so each PE switches when A2's first row reaches it
        test_errors = errors;
        test_num += 1;

        A2 = '{'{4'h9, 4'h8, 4'h7},
               '{4'h6, 4'h5, 4'h4},
               '{4'h3, 4'h2, 4'h1}};

        for (int i = 0; i < 3; i++) begin
            for (int j = 0; j < 3; j++) begin
                C_exp2[i][j] = 0;
                for (int r = 0; r < 3; r++)
                    C_exp2[i][j] += A2[i][r] * W2[r][j];
            end
        end

        // load W into slot 0, en low
        @(negedge clk);
        en = 0;
        w_load = 1;
        load_slot = 0;
        slot_in = '{default: 1'b1};
        for (int i = 0; i < 3; i++) begin
            for (int j = 0; j < 3; j++) begin
                b_in[i][j] = W[i][j];
            end
        end

        @(negedge clk);
        w_load = 0;
        load_slot = 1;
        slot_in = '{default: 1'b0};
        en = 1;
        a_in = '{default: '0};

        // repeat(3) @(negedge clk);

        for (int k = 0; k < 11; k++) begin
            @(negedge clk);

            // check, stream row m comes out of column c at k = m + c + 3
            for (int c = 0; c < 3; c++) begin
                m = k - 3 - c;
                if (m >= 0 && m < 3) begin
                    checks++;
                    if (result_matrix[c] !== 10'(C_exp[m][c])) begin
                        errors++;
                        $error("[%0t] A C[%0d][%0d]: expected %0d, got %0d", $time, m, c, C_exp[m][c], result_matrix[c]);
                    end
                end
                else if (m >= 3 && m < 6) begin
                    checks++;
                    if (result_matrix[c] !== 10'(C_exp2[m-3][c])) begin
                        errors++;
                        $error("[%0t] A2 C[%0d][%0d]: expected %0d, got %0d", $time, m-3, c, C_exp2[m-3][c], result_matrix[c]);
                    end
                end
            end

            // drive, row r gets stream row k - r, slot goes with it
            for (int r = 0; r < 3; r++) begin
                m = k - r;
                if (m >= 0 && m < 3) begin
                    a_in[r] = A[m][r];
                    slot_in[r] = 1'b0;
                end
                else if (m >= 3 && m < 6) begin
                    a_in[r] = A2[m-3][r];
                    slot_in[r] = 1'b1;
                end
                else begin
                    a_in[r] = 4'h0;
                    slot_in[r] = (m >= 6) ? 1'b1 : 1'b0;
                end
            end

            // load W2 into slot 1 early
            if (k == 1) begin
                w_load = 1;
                load_slot = 1;
                for (int i = 0; i < 3; i++) begin
                    for (int j = 0; j < 3; j++) begin
                        b_in[i][j] = W2[i][j];
                    end
                end
            end
            if (k == 2) w_load = 0;
        end

        if (errors == test_errors) $display("Test 7 passed: back to back, zero gap");
        else $display("Test 7 FAILED: back to back");

        repeat(3) @(negedge clk);

        $finish;

    end
endmodule
