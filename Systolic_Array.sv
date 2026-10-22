`timescale 1ns/1ps
module Systolic_Array #(parameter SIZE = 3)(
    input logic clk, rst_n, en, in_valid, load_slot, compute_slot,
    input logic [3:0] a_in [SIZE - 1:0],
    input logic [3:0] b_in [SIZE - 1:0][SIZE - 1:0],
    output logic [9:0] result_matrix [SIZE - 1:0]
);

    logic [3:0] a_wire [SIZE - 1:0][SIZE - 1:0]; //row, col
    logic [9:0] p_wire [SIZE - 1:0][SIZE - 1:0]; //partial sums row, coil

    // hook up internal wirings.
    generate
        for(genvar r = 0; r < SIZE; r++) begin : row
            for (genvar c = 0; c < SIZE; c++) begin : col
                Processing_Element PE (
                    .clk(clk), .rst_n(rst_n), .in_valid(in_valid), .load_slot(load_slot), .compute_slot(compute_slot), .en(en),
                    .a(c == 0 ? a_in[r] : a_wire[r][c-1]), // boundary hookup written directly in, if column is 0 a_in comes in, else stream the previous a
                    .b(b_in[r][c]),
                    .above_result(r == 0 ? '0 : p_wire[r-1][c]), // vertical boundary hookup, take 0 at top level and above result otherwise
                    .a_out(a_wire[r][c]),
                    .result(p_wire[r][c])
                );
            end
        end
    endgenerate


    // Hook up the bottom inputs
    generate
        for(genvar c = 0; c < SIZE; c++) begin : outputs
            assign result_matrix[c] = p_wire[SIZE-1][c];
        end
    endgenerate
endmodule

