`timescale 1ns/1ps

module mem_interface #(parameter SIZE = 3)(
    input logic clk, rst_n, load_slot, feed, row_slot, en, done,
    input logic [$clog2(SIZE)-1:0] row_idx,
    output logic [1:0] entry_valid, // to controller
    
    input logic in_valid, // external signals
    input logic [SIZE * SIZE * 4 - 1:0] a_packed, b_packed,

    output logic [3:0] a_skewed [SIZE], // To SA
    output logic skewed_slot[SIZE], // "slot in" in SA
    output logic [3:0] b_out [SIZE][SIZE],
    
    input logic [9:0] results_in [SIZE], // From SA
    
    output logic [(10 * SIZE * SIZE) - 1:0] results_packed, //4 bits by size^2 * 2 matrices bits
    output logic out_valid
);
    localparam RW = $clog2(SIZE);

    logic [3:0] a_internal [SIZE][SIZE];
    logic [3:0] b_internal [SIZE][SIZE];

    genvar i, j;
    generate
        for(i = 0; i < SIZE; i++) begin : unpack
            for (j = 0; j < SIZE; j++) begin
                assign a_internal[i][j] = a_packed[(4*SIZE*i + 4*j + 3) : (4*SIZE*i + 4*j)];
                assign b_internal[i][j] = b_packed[(4*SIZE*i + 4*j + 3) : (4*SIZE*i + 4*j)];
            end
        end
    endgenerate

    logic [3:0] A_buf [2][SIZE][SIZE];
    logic [3:0] B_buf [2][SIZE][SIZE];

    logic wr_ptr;

    always_ff @(posedge clk) begin
        if(!rst_n || done) begin
            entry_valid <= 2'b00;
            wr_ptr <= 1'b0;
            A_buf <= '{default: '{default: '{default: '0}}};
            B_buf <= '{default: '{default: '{default: '0}}};
        end else if(in_valid && !entry_valid[wr_ptr]) begin
            A_buf[wr_ptr] <= a_internal;
            B_buf[wr_ptr] <= b_internal;
            entry_valid[wr_ptr] <= 1'b1;
            wr_ptr <= ~wr_ptr;
        end
    end

    always_comb begin
        b_out = B_buf[load_slot];
    end

    logic [3:0] a_row[SIZE];
    always_comb begin
        for (int c = 0; c < SIZE; c++) begin
            a_row[c] = feed ? A_buf[row_slot][row_idx][c] : 4'h0; //pull this cycle's row
        end
    end

    //skew buffer for a
    logic [3:0] skew_a [SIZE][SIZE];

    genvar r, c;
    generate
        for (r = 0; r < SIZE; r++) begin
            if (r == 0) begin
                assign a_skewed[r] = a_row[r];
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
                            a_dly[d] <= a_dly[d-1];
                            slot_dly[d] <= slot_dly[d-1];
                        end
                    end
                end
                assign a_skewed[r] = a_dly[r-1];
                assign skewed_slot[r] = slot_dly[r-1];
            end
        end
    endgenerate

    logic [9:0] results_internal [SIZE][SIZE];
    logic [9:0] deskewed[SIZE];

    // results wiring, chain vertically from results
    generate
        for (c = 0; c < SIZE; c++)begin : unskew
            if (c == SIZE - 1)begin 
                assign deskewed[c] = results_in[c];
            end else begin
                logic [9:0] dly [SIZE - 1 - c];
                always_ff @(posedge clk)begin
                    if (!rst_n) begin
                        dly <= '{default: '0};
                    end else begin
                        dly[0] <= results_in[c];
                        for (int k = 1; k < SIZE -1 -c; k++) begin
                            dly[k] <= dly[k - 1];
                        end
                    end
                end
                assign deskewed[c] = dly[SIZE - 2 - c];
            end
        end
    endgenerate

    always_ff @(posedge clk) begin
        if(!rst_n) begin
            results_internal <= '{default: '{default : 0}};
        end else begin
            results_internal[0] <= deskewed;
            for (int k = 1; k < SIZE; k++) begin
                results_internal[k] <= results_internal[k - 1];
            end
        end
    end 

    localparam MARK_DLY = 2*SIZE; //shift register
    logic mark[MARK_DLY];
    always_ff @(posedge clk) begin
        if(!rst_n) begin
            mark <= '{default: 1'b0};
        end else begin
            mark[0] <= feed && (row_idx == $bits(row_idx)'(SIZE-1));
            for(int k = 1; k < MARK_DLY; k++) begin
                mark[k] <= mark[k-1];
            end
        end
    end
    assign out_valid = mark[MARK_DLY - 1];

    generate
        for(i = 0; i < SIZE; i++) begin : repack
            for (j = 0; j < SIZE; j++) begin
                assign results_packed[10*SIZE*i + 10*j + 9 : 10*SIZE*i + 10*j] = results_internal[SIZE - 1 - i][j];
            end
        end
    endgenerate
endmodule
