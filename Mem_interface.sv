`timescale 1ns/1ps

module Mem_interface #(parameter SIZE = 3)(
    input logic clk, rst_n, load_slot, feed, row_idx, row_slot, en, job_done, // internal control signals
    output entry_valid[1:0], // to controller
    
    input in_valid, // external signals
    input [SIZE * SIZE * 4 - 1:0] a_packed, b_packed,

    output logic [3:0] a_skewed [SIZE], // To SA
    output logic skewed_slot[SIZE], // "slot in" in SA
    output logic [3:0] b_out [SIZE][SIZE],
    
    input logic [9:0] results_in [SIZE], // From SA
    
    output logic [(4 * SIZE * SIZE * 2) - 1:0] results_packed, //4 bits by size^2 * 2 matrices bits
    output logic out_valid
);

    logic [3:0] a_in [SIZE];
    logic [3:0] b_internal [SIZE - 1:0][SIZE - 1:0];


    genvar i, j;
    generate
        for(i = 0; i < SIZE; i++) begin : unpack_a
            assign a_in[i] = a_packed[(4*(i+1) - 1) : 4*i];
            for (j = 0; j < SIZE; j++) begin : unpack_b
                assign b_internal[i][j] = b_packed[(12*j + 4*i + 3) : (12*j + 4*i)];
            end
        end
    endgenerate

    always_ff @(posedge clk) begin
        if(!rst_n) begin
            b_out <= '{default: '{default: '0}};
        end else if(in_valid) begin
            b_out <= b_internal;
        end
    end

    //skew buffer for a
    logic [3:0] skew_a [SIZE][SIZE];

    genvar r, c, d;
    generate
        for (r = 0; r < SIZE; r++) begin
            if (r == 0) begin
                assign a_skewed[r] = a_in[r];
                assign skewed_slot[r] = row_slot;
            end else begin
                logic [3:0] a_dly[r];
                logic slot_dly[r];
                always_ff @(posedge clk) begin
                    if (!rst_n) begin
                    a_dly <= '{default: '0};
                    slot_dly <= '{default: 1'b0};
                    end else if (en) begin
                        a_dly[0] <= a_row[r];
                        slot_dly[0] <= row_slot;
                        for (int d = 1; d < r; d++) begin
                            a_dly[d]    <= a_dly[d-1];
                            slot_dly[d] <= slot_dly[d-1];
                        end
                    end
                end
                assign a_skewed[r] = a_dly[r-1];
                assign slot_skewed[r] = slot_dly[r-1];
            end
        end
    endgenerate

    logic [9:0] results_internal [SIZE - 1:0][SIZE - 1:0];

    // results wiring, chain vertically from results
    generate
        for (c = 0; c < SIZE; c++)begin
            always_ff @(posedge clk) begin
                if(!rst_n) begin
                    results_internal[0][c] <= 10'b00_0000_0000;
                end else begin
                    results_internal[0][c] <= results_in[c];
                end
            end 

            for (d = 1; d < SIZE; d++) begin
                always_ff @(posedge clk) begin
                    if(!rst_n) begin
                        out_valid <= 1'b0;
                        results_internal[d][c] <= 10'b00_0000_0000;
                    end else begin
                        results_internal[d][c] <= results_internal[d][c-1];
                        if(results_internal[SIZE - 1][SIZE - 1] != '0) begin
                            out_valid <= 1'b1;
                        end
                    end
                end 
            end
        end
    endgenerate

    generate
        for(i = 0; i < SIZE; i++) begin : repack
            for (j = 0; j < SIZE; j++) begin
                assign results_packed[30*j + 10*i + 9 : 30*j + 10*i] = results_internal[i][j];
            end
        end
    endgenerate
    
    



    // logic [3:0] cur_a [3];
    // logic cur_s;
    // logic [3:0] dly_a [2][3];
    // logic dly_s [2];

    // always_comb begin
    //     for(int i = 0; i < 3; i++) begin
    //         for(int j = 0; j < 3; j++) begin
    //             b_in[i][j] = load_slot ? W2[i][j] : W[i][j];
    //         end
    //     end

    //     for(int r = 0; r < 3; r++) begin
    //         cur_a[r] = feed ? (row_slot ? A2[row_idx][r] : A[row_idx][r]) : 4'h0;
    //     end
    //     cur_s = row_slot;

    //     a_in[0] = cur_a[0];
    //     a_in[1] = dly_a[0][1];
    //     a_in[2] = dly_a[1][2];
    //     slot_in[0] = cur_s;
    //     slot_in[1] = dly_s[0];
    //     slot_in[2] = dly_s[1];
    // end

    // always_ff @(posedge clk) begin
    //     if (!rst_n) begin
    //         dly_a <= '{default: '{default: '0}};
    //         dly_s <= '{default: 1'b0};
    //     end else if (en) begin
    //         dly_a[1] <= dly_a[0];
    //         dly_a[0] <= cur_a;
    //         dly_s[1] <= dly_s[0];
    //         dly_s[0] <= cur_s;
    //     end
    // end

endmodule
