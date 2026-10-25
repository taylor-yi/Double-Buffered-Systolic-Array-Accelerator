// `timescale 1ns/1ps

// module Mem_interface #(parameter SIZE = 3)(
//     input logic clk, rst_n, load_slot, feed, row_idx, row_slot, en, job_done, // internal control signals
//     output entry_valid[1:0], // to controller
    
//     input in_valid, // external signals
//     input [N * 4 - 1:0] a_packed, b_packed,

//     output logic [3:0] a_skewed, b_skewed [SIZE - 1:0]; // To SA
    
//     input logic [9:0] results_in [(SIZE * 2) - 1:0]; // From SA
    
//     output logic [(4 * SIZE * SIZE * 2) - 1:0] results_packed; //4 bits by size^2 * 2 matrices bits
//     output logic out_valid;

// );

//     logic [3:0] a_in, b_in [SIZE - 1:0];

//     genvar i;
//     generate
//         for(i = 0; i < SIZE; i++) begin
//             assign a_in[i] = a_packed[(4*(i+1) - 1) : 4*i];
//             assign b_in[i] = b_packed[4*(i+1)-1 : 4*i];
//         end
//     endgenerate



//     // logic [3:0] cur_a [3];
//     // logic cur_s;
//     // logic [3:0] dly_a [2][3];
//     // logic dly_s [2];

//     // always_comb begin
//     //     for(int i = 0; i < 3; i++) begin
//     //         for(int j = 0; j < 3; j++) begin
//     //             b_in[i][j] = load_slot ? W2[i][j] : W[i][j];
//     //         end
//     //     end

//     //     for(int r = 0; r < 3; r++) begin
//     //         cur_a[r] = feed ? (row_slot ? A2[row_idx][r] : A[row_idx][r]) : 4'h0;
//     //     end
//     //     cur_s = row_slot;

//     //     a_in[0] = cur_a[0];
//     //     a_in[1] = dly_a[0][1];
//     //     a_in[2] = dly_a[1][2];
//     //     slot_in[0] = cur_s;
//     //     slot_in[1] = dly_s[0];
//     //     slot_in[2] = dly_s[1];
//     // end

//     // always_ff @(posedge clk) begin
//     //     if (!rst_n) begin
//     //         dly_a <= '{default: '{default: '0}};
//     //         dly_s <= '{default: 1'b0};
//     //     end else if (en) begin
//     //         dly_a[1] <= dly_a[0];
//     //         dly_a[0] <= cur_a;
//     //         dly_s[1] <= dly_s[0];
//     //         dly_s[0] <= cur_s;
//     //     end
//     // end

// endmodule