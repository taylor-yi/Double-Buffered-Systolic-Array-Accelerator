`timescale 1ns/1ps
module systolic #(parameter SIZE = 3) (
    input clk, rst_n, 

    input logic [3:0] a11, a12, a13, a21, a22, a23, a31, a32, a33,
    input logic [3:0] b11, b12, b13, b21, b22, b23, b31, b32, b33,

    input logic in_valid,

    output logic [9:0] C11, C12, C13, C21, C22, C23, C31, C32, C33,
    output logic out_valid
);

    logic [35:0] a_packed, b_packed;

    assign a_packed = {a33, a32, a31, a23, a22, a21, a13, a12, a11};
    assign b_packed = {b33, b32, b31, b23, b22, b21, b13, b12, b11};

    //for controller
    logic [1:0] entry_valid;
    logic w_load;
    logic en;
    logic load_slot;
    logic row_slot;
    logic done;
    logic feed;
    logic [$clog2(SIZE) - 1:0] row_idx;

    //for mem interface
    logic [3:0] a_skewed [SIZE];
    logic slot_data [SIZE];
    logic [3:0] b_wires[SIZE][SIZE];
    logic [(10 * SIZE * SIZE) - 1:0] results_packed;

    //For systolic array
    logic [9:0] result_matrix [SIZE];
    
    always_comb begin
        C11 = results_packed[9:0];
        C12 = results_packed[19:10];
        C13 = results_packed[29:20];
        C21 = results_packed[39:30];
        C22 = results_packed[49:40];
        C23 = results_packed[59:50];
        C31 = results_packed[69:60];
        C32 = results_packed[79:70];
        C33 = results_packed[89:80];
    end

    controller #(.SIZE(SIZE)) controlla (
        .clk(clk), .rst_n(rst_n),
        .entry_valid(entry_valid),
        .w_load(w_load), //to SA
        .en(en), //to SA and MI
        .load_slot(load_slot), //to SA and MI
        .row_slot(row_slot), //to MI
        .done(done), // to MI
        .feed(feed), //to MI
        .row_idx(row_idx) //to MI  
    );

    mem_interface #(.SIZE(SIZE)) memi (
        .clk(clk), .rst_n(rst_n),
        .load_slot(load_slot),
        .feed(feed),
        .row_slot(row_slot),
        .en(en),
        .done(done),
        .row_idx(row_idx),
        .entry_valid(entry_valid), //to controller
        .in_valid(in_valid),
        .a_packed(a_packed),
        .b_packed(b_packed),
        .a_skewed(a_skewed), // to SA
        .skewed_slot(slot_data),
        .b_out(b_wires),
        .results_in(result_matrix),
        .results_packed(results_packed),
        .out_valid(out_valid)
    );

    systolic_array #(.SIZE(SIZE)) array (
        .clk(clk), .rst_n(rst_n),
        .en(en),
        .w_load(w_load),
        .load_slot(load_slot),
        .slot_in(slot_data),
        .a_in(a_skewed),
        .b_in(b_wires),
        .result_matrix(result_matrix) //to MI
    );
endmodule