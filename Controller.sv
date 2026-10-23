`timescale 1ns/1ps
module Controller #(parameter SIZE = 3, parameter NUM_MATR = 2) (
    input logic clk, rst_n, back_2_back,

    input logic start,

    output logic in_valid, en, load_slot, compute_slot, done
);

typedef enum logic [1:0] {IDLE, LOAD, DONE} load_state;
typedef enum logic [1:0] {IDLE, COMPUTE, DONE} compute_state;

load_state l_state, l_next_state;
compute_state c_state, c_next_state;

// cycle definitions
localparam COMPUTE_CYCLES = 3 * SIZE - 1; // 8
localparam TOTAL_CYCLES = NUM_MATR * (COMPUTE_CYCLES + 2);

logic [$clog2(TOTAL_CYCLES:0)] cycle_count;
logic [$clog2(NUM_MATR):0] mat_compl; //count for how many matrix mults completed
logic start_again; // Signal that a new matrix is coming in, we'll call it 1 clock cycle ahead

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
        load_slot <= 1'b1;
        compute_slot <= 1'b0;
    end else begin
        l_state <= l_next_state;
        c_state <= c_next_state;

        if(l_next_state == LOAD) begin
            load_slot <= ~load_slot; // inver the load slot right before loading
        end

        if (c_next_state == COMPUTE && l_next_state == IDLE) begin
            compute_slot <= load_slot;
        end

    end
end

// FSM to load
always_comb begin
    case (l_state) : load_state_machine
        default: l_next_state = IDLE;
        IDLE: begin
            in_valid = 1'b0;
            
            if(start || start_again) begin // arbitrary 3 cycles before computation finishes to load second weights
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

always_comb begin
    case(c_state) : compute_state_machine
        default: c_next_state = IDLE;
        IDLE: begin
            en = 1'b0;
            if((start || start_again) && cycle_count >= 4'b0001) begin // must make start maintain high then
                c_next_state = COMPUTE;
            end else begin
                c_next_state = IDLE;
            end
        end
        COMPUTE: begin
            en = 1'b1;
            if (cycle_count == TOTAL_CYCLES - 1) begin
                c_next_state = DONE;
            end else begin
                c_next_state = COMPUTE;
            end
        end
        DONE: begin
            en = 1'b0;
            mat_compl = mat_compl + 1;
            if(mat_compl !== NUM_MATR) begin
                c_next_state = COMPUTE;
            end else begin
                c_next_state = IDLE;
            end
        end

endmodule