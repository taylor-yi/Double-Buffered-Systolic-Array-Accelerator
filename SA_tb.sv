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
endmodule