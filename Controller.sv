`timescale 1ns/1ps
module Controller #(parameter SIZE = 3) (
    input logic clk, rst_n, en, in_valid, load_slot, compute_slot,
    output logic done
);

typedef enum logic [1:0] {IDLE, LOAD, DONE} load_state;
typedef enum logic [1:0] {IDLE, COMPUTE, DONE} compute_state;

load_state l_state, l_next_state;
compute_state c_state, c_next_state;


endmodule