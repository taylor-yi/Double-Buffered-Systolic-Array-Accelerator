`timescale 1ns/1ps
module Controller #(parameter SIZE = 3, parameter NUM_MATR = 2) (
    input logic clk, rst_n, back_2_back,

    input logic start,

    output logic in_valid, en, load_slot, compute_slot, done
);

typedef enum logic [1:0] {L_IDLE, LOAD, L_DONE} load_state;
typedef enum logic [1:0] {C_IDLE, COMPUTE, C_DONE} compute_state;

load_state l_state, l_next_state;
compute_state c_state, c_next_state;

// cycle definitions
localparam COMPUTE_CYCLES = 3 * SIZE - 1; // 8
localparam TOTAL_CYCLES = NUM_MATR * (COMPUTE_CYCLES + 2);

logic [$clog2(TOTAL_CYCLES):0] cycle_count;
logic [$clog2(NUM_MATR+1)-1:0] mat_compl;

logic start_again; // Signal that a new matrix is coming in, we'll call it 1 clock cycle ahead

// drive output
always_ff @(posedge clk) begin
    if(!rst_n) begin
        done <= 1'b0;
    end else if (start) begin
        done <= 1'b0;
    end else if (c_state == C_DONE && c_next_state == C_IDLE) begin
        done <= 1'b1;
    end
end

// state driver
always_ff @(posedge clk) begin
    if(!rst_n) begin
        l_state <= L_IDLE;
        c_state <= C_IDLE;
        load_slot <= 1'b1;
        compute_slot <= 1'b0;
    end else begin
        l_state <= l_next_state;
        c_state <= c_next_state;

        if(l_next_state == LOAD) begin
            load_slot <= ~load_slot; // inver the load slot right before loading
        end

        if (c_next_state == COMPUTE && l_next_state == L_IDLE) begin
            compute_slot <= load_slot;
        end

    end
end

//count for how many matrix mults completed
always_ff @(posedge clk) begin 
    if (!rst_n) begin
        mat_compl <= '0;
    end else if (start) begin
        mat_compl <= '0;
    end else if (c_state == C_DONE) begin
        mat_compl <= mat_compl + 1;
        if(mat_compl + 1 < NUM_MATR) begin
            start_again <= 1'b1;
        end else begin
            start_again <= 1'b0;
        end
    end else begin
        start_again <= 1'b0;
    end
end 

// cycle_count
always_ff @(posedge clk) begin
    if(!rst_n || done) begin
        cycle_count = '0;
    end else begin
        cycle_count <= cycle_count + 1;
    end
end

// FSM to load
always_comb begin
    case (l_state) load_state_machine
        default:
            in_valid = 1'b0; 
            l_next_state = L_IDLE;
        L_IDLE: begin
            in_valid = 1'b0;
            
            if(start || start_again) begin // arbitrary 3 cycles before computation finishes to load second weights
                l_next_state = LOAD;
            end else begin
                l_next_state = L_IDLE;
            end
        end
        LOAD: begin
            in_valid = 1'b1;
            l_next_state = L_IDLE;
        end
        L_DONE: begin //unused for now
            in_valid = 1'b0;
            l_next_state = L_IDLE;
        end
    endcase
end

always_comb begin
    case(c_state) compute_state_machine
        default:
            en = 1'b0; 
            c_next_state = C_IDLE;
        C_IDLE: begin
            en = 1'b0;
            if((start || start_again) && cycle_count[3:0] >= 4'b0001) begin // must make start maintain high then
                c_next_state = COMPUTE;
            end else begin
                c_next_state = C_IDLE;
            end
        end
        COMPUTE: begin
            en = 1'b1;
            if (cycle_count == TOTAL_CYCLES - 1) begin
                c_next_state = C_DONE;
            end else begin
                c_next_state = COMPUTE;
            end
        end
        C_DONE: begin
            en = 1'b0;
            if(mat_compl < NUM_MATR) begin
                c_next_state = COMPUTE;
            end else begin
                c_next_state = C_IDLE;
            end
        end
    endcase
end

endmodule
