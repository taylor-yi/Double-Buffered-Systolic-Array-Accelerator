`timescale 1ns/1ps
// Linter line: verilator --lint-only Processing_Element.sv --top-module PE

module Processing_Element(
    input logic clk, rst_n, in_valid, load_slot, compute_slot, en,
    input logic [3:0] a, b,
    input logic [9:0] above_result,
    output logic [3:0] a_out, b_out,
    output logic [9:0] result
);

    logic [3:0] b1, b2, w; //w = weight

    // adding a zero check can save heat by not firing a flip flop, right now it only checks if both are zero.
    // in full optimization it will also check if respective b1 or b2 is zero and make the whole sum zero
    logic zeroed;
    assign w = compute_slot ? b2 : b1;
    assign b_out = load_slot ? b2 : b1;
    assign zeroed = (a == '0) || (w == '0);

    // b assignment based on slot
    always_ff @(posedge clk) begin
        if(!rst_n) begin
            b1 <= 4'h0;
            b2 <= 4'h0;
        end else begin
            if(in_valid) begin
                if(load_slot) begin
                    b2 <= b;
                end else begin
                    b1 <= b;
                end
            end
        end
    end

    // add to the accumulator
    always_ff @(posedge clk) begin
        if(!rst_n) begin
            result <= '0;
            a_out <= '0;
        end else begin
            if(en) begin
                a_out <= a;
                result <= zeroed ? above_result : above_result + (a * w) ;
            end
        end
    end

    // simulation safety check to make sure we aren't loading into the same slot we are computing from
    // assert property (@(posedge clk) disable iff (!rst_n) !(in_valid && en && (load_slot == compute_slot))) else $error("Loading into the compute slot.");
endmodule
