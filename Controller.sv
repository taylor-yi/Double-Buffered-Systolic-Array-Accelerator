`timescale 1ns/1ps
module Controller #(parameter SIZE = 3, parameter NUM_MATR = 2) (
    input logic clk, rst_n, job_ready,

    input logic [1:0] entry_valid,

    output logic w_load, en, load_slot, row_slot, done, feed, //group a: en, row_slot, / group b: load_slot, w_load, 
    output logic [$clog2(SIZE) - 1:0] row_idx // which row of A to feed this cycle
);

    typedef enum logic [2:0] {IDLE, LOAD, FEED_0, FEED_1, DRAIN, DONE} state_t;

    state_t state, next_state;

    // cycle definitions
    localparam DRAIN_CYCLES = 2 * (SIZE - 1); // 4, time for the last row to clear PE[SIZE-1][SIZE-1]
    localparam PRELOAD_AT = 1; //which feed cycle of the first matrix loads the second weights
    localparam CW = $clog2((DRAIN_CYCLES > SIZE) ? DRAIN_CYCLES : SIZE); //CountWidth

    logic [CW-1:0] cycle_count;
    // logic [$clog2(NUM_MATR+1)-1:0] mat_compl;

    // state driver
    always_ff @(posedge clk) begin
        if(!rst_n) begin
            state <= IDLE;
            cycle_count <= '0;
        end else begin
            state <= next_state;

            if(next_state != state) begin
                cycle_count <= '0;
            end else begin
                cycle_count <= cycle_count + 1;
            end
        end
    end

    //FSM
    always_comb begin
        next_state = state;
        w_load = 1'b0;
        en = 1'b0;
        load_slot = 1'b0;
        row_slot = 1'b0;
        feed = 1'b0;
        done = 1'b0;
        row_idx = $bits(row_idx)'(cycle_count);

        case(state)
            IDLE: begin
                if(entry_valid[0]) begin
                    next_state = LOAD;
                end
            end
            LOAD: begin
                w_load = 1'b1;
                load_slot = 1'b0;
                next_state = FEED_0;
            end
            FEED_0: begin // Matrix 1
                en = 1'b1;
                feed = 1'b1;
                row_slot = 1'b0;

                if (cycle_count == CW'(PRELOAD_AT)) begin //case when you are preloading the NEXT cycle of weights
                    w_load = 1'b1;
                    load_slot = 1'b1;
                end

                if((cycle_count == CW'(SIZE - 1))) begin
                    if(entry_valid[1]) begin
                        next_state = FEED_1;
                    end else begin
                        next_state = DRAIN;
                    end
                end
            end
            FEED_1: begin // Matrix 2
                en = 1'b1;
                feed = 1'b1;
                row_slot = 1'b1;

                if (cycle_count == CW'(SIZE - 1)) begin
                    next_state = DRAIN;
                end
            end
            DRAIN: begin
                en = 1'b1;
                row_slot = 1'b1;

                if (cycle_count == CW'(DRAIN_CYCLES - 1)) begin
                    next_state = DONE;
                end
            end
            DONE: begin
                done = 1'b1;
                next_state = IDLE;
            end

            default: begin
                next_state = IDLE;
            end
        endcase
    end
endmodule
