`timescale 1ns/1ps
module Systolic_Array #(parameter SIZE = 3)(
    input logic clk, rst_n, en, in_valid,
    input logic [3:0] a_in, b_in [SIZE - 1:0]
    output logic [3:0] result_matrix [SIZE - 1:0]
);

    logic [3:0] a_wire [SIZE - 1:0][SIZE]; //row, col
    logic [3:0] b_wire [SIZE][SIZE - 1:0]; //col, row

    genvar r, c, d;

    generate
        for (r = 0; r < SIZE; r++)begin
            assign a_wire[r][0] = a_in[r]; // pull activations from the left
        end for (c = 0; c < SIZE; c++) begin
            assign b_wire[0][c] = b_in[c]; // weights come in from the top
        end
    endgenerate

    logic [9:0] pe_result [SIZE-1:0][SIZE-1:0];
endmodule
