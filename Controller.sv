`timescale 1ns/1ps
module Controller #(parameter SIZE = 3, parameter NUM_MATR = 2) (
    input logic clk, rst_n, start,

    output logic in_valid, en, load_slot, row_slot, done, feed, //group a: in_valid, en, feed / group b: load_slot, row_slot,
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
    in_valid = 1'b0;
    en = 1'b0;
    load_slot = 1'b0;
    row_slot = 1'b0;
    feed = 1'b0;
    done = 1'b0;
    row_idx = $bits(row_idx)'(cycle_count);

    case(state)
        IDLE: begin
            if(start) begin
                next_state = LOAD;
            end
        end
        LOAD: begin
            in_valid = 1'b1;
            load_slot = 1'b0;
            next_state = FEED_0;
        end
        FEED_0: begin // Matrix 1
            en = 1'b1;
            feed = 1'b1;
            row_slot = 1'b0;

            if (cycle_count == CW'(PRELOAD_AT)) begin //case when you are preloading the NEXT cycle of weights
                in_valid = 1'b1;
                load_slot = 1'b1;
            end

            if(cycle_count == CW'(SIZE - 1)) begin
                next_state = FEED_1;
            end else begin
                next_state = FEED_0;
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

            if (count == CW'(DRAIN_CYCLES - 1)) begin
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

// Counters
//count for how many matrix mults completed
// always_ff @(posedge clk) begin 
//     if (!rst_n) begin
//         mat_compl <= '0;
//         start_again <= '0;
//     end else if (start) begin
//         mat_compl <= '0;
//     end else if (c_state == C_DONE) begin
//         mat_compl <= mat_compl + 1;
//         if(mat_compl + 1 < NUM_MATR) begin
//             start_again <= 1'b1;
//         end else begin
//             start_again <= 1'b0;
//         end
//     end else begin
//         start_again <= 1'b0;
//     end
// end

// // cycle_count
// always_ff @(posedge clk) begin
//     if(!rst_n || done) begin
//         cycle_count <= '0;
//     end else begin
//         cycle_count <= cycle_count + 1;
//     end
// end

// // drive output
// always_ff @(posedge clk) begin
//     if(!rst_n) begin
//         done <= 1'b0;
//     end else if (start) begin
//         done <= 1'b0;
//     end else if (c_state == C_DONE && c_next_state == C_IDLE) begin
//         done <= 1'b1;
//     end
// end

// // FSM to load
// always_comb begin
//     case (l_state)
//         default: begin
//             in_valid = 1'b0; 
//             l_next_state = L_IDLE;
//         end
//         L_IDLE: begin
//             in_valid = 1'b0;
            
//             if(start || start_again) begin // arbitrary 3 cycles before computation finishes to load second weights
//                 l_next_state = LOAD;
//             end else begin
//                 l_next_state = L_IDLE;
//             end
//         end
//         LOAD: begin
//             in_valid = 1'b1;
//             l_next_state = L_IDLE;
//         end
//         L_DONE: begin //unused for now
//             in_valid = 1'b0;
//             l_next_state = L_IDLE;
//         end
//     endcase
// end

// always_comb begin
//     case(c_state)
//         default: begin
//             en = 1'b0; 
//             c_next_state = C_IDLE;
//         end
//         C_IDLE: begin
//             en = 1'b0;
//             if((start || start_again) && cycle_count[3:0] >= 4'b0001) begin // must make start maintain high then
//                 c_next_state = COMPUTE;
//             end else begin
//                 c_next_state = C_IDLE;
//             end
//         end
//         COMPUTE: begin
//             en = 1'b1;
//             if (cycle_count == TOTAL_CYCLES - 1) begin
//                 c_next_state = C_DONE;
//             end else begin
//                 c_next_state = COMPUTE;
//             end
//         end
//         C_DONE: begin
//             en = 1'b0;
//             if(mat_compl < NUM_MATR) begin
//                 c_next_state = COMPUTE;
//             end else begin
//                 c_next_state = C_IDLE;
//             end
//         end
//     endcase
// end

endmodule
