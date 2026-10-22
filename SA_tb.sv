`timescale 1ns/1ps
// Systolic Array Testbench
module SA_tb ();
    logic clk, rst_n, en, in_valid, load_slot, compute_slot;
    logic [3:0] a_in [2:0];
    logic [3:0] b_in [2:0][2:0];
    logic [9:0] result_matrix [2:0];

    Systolic_Array dut (.*);

    initial begin
        clk = 0
        forever #5 clk = ~clk;
    end

    int errors = 0, checks = 0, test_errors;

    initial begin
        $dumpfile(dump.vcd);
        $dumpvars(0, SA_tb);
    end

    // Hook up copy systolic array to iterate over constant variables
    logic [3:0] pe_a [3][3];
    
    for (genvar i = 0; i < 3; i++) begin : tap_r
        for (genvar j = 0; j < 3; j++) begin : tap_c
            assign pe_a[i][j] = dut.row[i].col[j].PE.a;
        end
    end

    initial begin
        rst_n = 0;
        en = 0;
        in_valid = 0;
        load_slot = 0;
        compute_slot = 0;
        a_in = '0;
        b_in = '0;
        
        // Test 1: check a_in load correctly
        @(negedge clk);
        rst_n = 1;
        in_valid = 1;
        load_slot = 1;
        compute_slot = 1;
        a_in = '0;
        @(negedge clk);
        for(int i = 0; i < 3; i ++)begin
            for(int j = 0; j < 3; j++)begin
                if(pe_a[i][j] != 0) begin
                    $error("[%0t] Mismatch in loading activation 0s. Expected: 0, 'a' was: %0d.", $time, pe_a[i][j]);
                    errors++;
                end
            end
        end

        @(negedge clk);

        a_in = '{'{0, 1, 2},
                 '{3, 4, 5},
                 '{6, 7, 8}};
        
        @(negedge clk);
        for(int i = 0; i < 3; i ++)begin
            for(int j = 0; j < 3; j++)begin
                if(pe_a[i][j] != a_in[i][j]) begin
                    $error("[%0t] Mismatch in loading 'a'. Expected: %0d, 'a' was: %0d.", $time, a_in[i][j], pe_a[i][j]);
                    errors++;
                end
            end
        end
        @(negedge clk);
        if(errors == test_errors) begin $display("Test 1 Passed correctly. Activations loaded correctly.") end
        else begin $display("Test 1 Failed. Activations loaded incorrectly.") end
        
        $finish

    end
endmodule