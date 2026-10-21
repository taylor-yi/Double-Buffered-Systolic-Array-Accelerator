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
    generate
        for(r = 0; r < SIZE; r++) begin
            for (c = 0; c < SIZE; c++) begin
                Processing_Element PE (
                    .clk(clk), .rst_n(rst_n), .in_valid(in_valid)
                );

                input logic clk, rst_n, in_valid, load_slot, compute_slot, en,
                input logic [3:0] a, b,
                input logic [9:0] above_result,
                output logic [3:0] a_out, b_out,
                output logic [9:0] result

            end
        end
    endgenerate
endmodule
