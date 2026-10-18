`timescale 1ns/1ps
// Linter line: verilator --lint-only Processing_Element.sv --top-module PE

module PE(
    input logic clk, rst_n, in_valid, slot, en, drain_en,
    input logic [3:0] a, b,
    input logic [9:0] above_result,
    output logic [9:0] result
);

logic [3:0] b1, b2;

logic [9:0] mult_result;

// adding a zero check can save heat by not firing a flip flop, right now it only checks if both are zero.
// in full optimization it will also check if respective b1 or b2 is zero and make the whole sum zero
logic zeroed;
logic [3:0] temp;

always_comb begin : check_zeroes
    temp = (slot ? a | b1 : a | b2);
    zeroed = (temp == '0);
end

// multiply a and b, but based on the slot signal
always_comb begin : multiply
    if(!slot) begin
        mult_result = a * b1;
    end else begin
        mult_result = a * b2;
    end  
end

// b assignment based on slot
always_ff @(posedge clk) begin
    if(!rst_n) begin
        // result <= 10'b0000_0000_00;
        b1 <= 4'h0;
        b2 <= 4'h0;
    end else begin
        if(in_valid) begin
            if(!slot) begin
                b1 <= b;
            end else begin
                b2 <= b;
            end
        end
    end
end

// add to the accumulator
always_ff @(posedge clk) begin
    if(!rst_n) begin
        result <= '0;
    end else begin
        if(en) begin
            result <= above_result + mult_result;
        end
    end
end

endmodule

module PE_tb ();
    logic clk, rst_n, in_valid, slot, en, drain_en;
    logic [3:0] a, b;
    logic [9:0] above_result;
    logic [9:0] result;

    PE dut(.*);

    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    initial begin
        $dumpfile("dump.vcd");     // the output file's name
        $dumpvars(0, PE_tb);    // depth 0 = this scope AND everything under it
    end

    initial begin
        rst_n = 0; 
        en = 0; 
        drain_en = 0; 
        in_valid = 0;
        a = 0; 
        b = 0; 
        #10
        rst_n = 1;
        #20

        // 2 + 1 * 1 = 3
        in_valid = 1; slot = 0;
        above_result = 2;
        a = 1; b = 1; en = 1;

        #20
        slot = 1;
        b = 2; 

        #40;

        $display("result is %0d", result);
        $finish;
    end
endmodule