`timescale 1ns/1ps

module Systolic_Array #(parameter SIZE = 3)(
    input logic clk, rst_n, en, in_valid,
    input logic [3:0] a_in, b_in [SIZE - 1:0]
    output logic [3:0] result_matrix [SIZE - 1:0]
);


endmodule
