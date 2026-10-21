`timescale 1ns/1ps
module Systolic_Array #(parameter SIZE = 3)(
    input logic clk, rst_n, en, in_valid, load_slot, compute_slot,
    input logic [3:0] a_in [SIZE - 1:0],
    input logic [3:0] b_in [SIZE - 1:0][SIZE - 1:0],
    output logic [3:0] result_matrix [SIZE - 1:0]
);

    logic [3:0] a_wire [SIZE - 1:0][SIZE]; //row, col
    logic [9:0] p_wire [SIZE][SIZE - 1:0]; //partial sums col, row

    genvar r, c, d;

    //confusing, but first you hook up the edge inputs
    generate
        for (r = 0; r < SIZE; r++)begin
            assign a_wire[r][0] = a_in[r]; // pull activations from the left
        end for (c = 0; c < SIZE; c++) begin
            assign p_wire[0][c] = b_in[c]; // partial sums flow down and then hook up with output boundary, we should probably switch to direct load
        end
    endgenerate

    //internal inputs next
    logic [9:0] pe_result [SIZE-1:0][SIZE-1:0];
    generate
        for(r = 0; r < SIZE; r++) begin
            for (c = 0; c < SIZE; c++) begin
                Processing_Element PE (
                    .clk(clk), .rst_n(rst_n), .in_valid(in_valid), .load_slot(load_slot), .compute_slot(compute_slot), .en(en),
                    .a(a_wire[r][c]), .b(b_in[r][c]),
                    .above_result(r == 0 ? 4'h0 : )
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
