`timescale 1ns/1ps
// Systolic Array Testbench
module SA_tb ();
    logic clk, rst_n, en, in_valid, load_slot, compute_slot;
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

    for (genvar i = 0; i < 3; i++) begin : tap_b_r
        for (genvar j = 0; j < 3; j++) begin : tap_b_c
            assign pe_b1[i][j] = dut.row[i].col[j].PE.b1;
            assign pe_b2[i][j] = dut.row[i].col[j].PE.b2;
        end
    end

    initial begin
        rst_n = 0;
        en = 0;
        in_valid = 0;
        load_slot = 0;
        compute_slot = 0;
        a_in = '{default: '0};
        b_in = '{default: '0};
        
        // Test 1: check a_in load correctly
        @(negedge clk);
        rst_n = 1;
        en = 1;
        in_valid = 0;
        load_slot = 1;
        compute_slot = 0; // different slots, avoids the hazard assertion
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

        // Test 2, check b is loading correctly
        @(negedge clk);
        rst_n = 1;
        en = 1;
        in_valid = 1; 
        load_slot = 0; // load b1 with 1s
        compute_slot = 1; // different slots, avoids the hazard assertion
        b_in = '{'{4'h1, 4'h1, 4'h1},
                '{4'h1, 4'h1, 4'h1},
                '{4'h1, 4'h1, 4'h1}};
        
        @(negedge clk); 
        load_slot = 1; //load b2 with 1s
        compute_slot = 0;
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
        compute_slot = 1;
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
        compute_slot = 0;
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
        compute_slot = 0;
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

        
        $finish;

    end
endmodule