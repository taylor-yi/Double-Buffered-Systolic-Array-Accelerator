`timescale 1ns/1ps
module Controller #(parameter SIZE = 3) (
    input logic clk, rst_n, en, 

    input logic start, 
    output logic in_valid, load_slot, compute_slot, done
);

typedef enum logic [1:0] {IDLE, LOAD, DONE} load_state;
typedef enum logic [1:0] {IDLE, COMPUTE, DONE} compute_state;

load_state l_state, l_next_state;
compute_state c_state, c_next_state;

// cycle definitions
localparam COMPUTE_CYCLES = 3 * SIZE - 1; // 8
localparam TOTAL_CYCLES = COMPUTE_CYCLES + 2;

logic [$clog2(TOTAL_CYCLES:0)] cycle_count;

// drive output
always_ff @(posedge clk) begin
    if(!rst_n) begin
        done <= 1'b0;
    end else if (start) begin
        done <= 1'b0;
    end else if (c_state == DONE && c_next_state == IDLE) begin
        done <= 1'b1;
    end
end

// state driver
always_ff @(posedge clk) begin
    if(!rst_n) begin
        l_state <= IDLE;
        c_state <= IDLE;
    end else begin
        l_state <= l_next_state;
        c_state <= c_next_state;
    end
end

// FSM to load
always_comb begin
    case (l_state) : load_state
        default: l_next_state = IDLE;
        IDLE: begin
            in_valid = 1'b0;
            if(start || cycle_count == COMPUTE_CYCLES - 3) begin // arbitrary 3 cycles before computation finishes to load second weights
                l_next_state = LOAD;
            end else begin
                l_next_state = IDLE;
            end
        end
        LOAD: begin
            in_valid = 1'b1;
            l_next_state = IDLE;
        end
        DONE: begin
            l_next_state = IDLE;
        end
    endcase

end


endmodule