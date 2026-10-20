`timescale 1ns/1ps
// Linter line: verilator --lint-only Processing_Element.sv --top-module PE

module PE(
    input logic clk, rst_n, in_valid, load_slot, compute_slot, en,
    input logic [3:0] a, b,
    input logic [9:0] above_result,
    output logic [3:0] a_out, b_out,
    output logic [9:0] result
);

    logic [3:0] b1, b2, w; //w = weight

    logic [9:0] mult_result;

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
    assert property (@(posedge clk) disable iff (!rst_n) !(in_valid && en && (load_slot == compute_slot))) else $error("Loading into the compute slot.");

endmodule

module PE_tb ();
    logic clk, rst_n, in_valid, load_slot, compute_slot, en,
    logic [3:0] a, b,
    logic [9:0] above_result,
    logic [3:0] a_out, b_out,
    logic [9:0] result

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

        // Test 1: Check load_slot is working:
        in_valid = 1; load_slot = 0;
        b = 3;
        #10
        in_valid = 0;
        if (dut.b1 == 3) begin $display("b1 loaded correctly. Value is %0d", dut.b1); end
        #10
        // keep in_valid low for a little bit to make sure it doesn't load too early
        slot = 1;
        b = 5;
        #10
        in_valid = 1;
        #10
        in_valid = 0;
        if (dut.b2 == 5) begin $display("b2 loaded correctly. Value is %0d", dut.b2); end
        #10

        // Test 2: Is result receiving the output correctly?
        // 2 + 1 * 3 = 5

        rst_n = 0; en = 0; drain_en = 0; in_valid = 0; #20
        
        rst_n = 1;
        #10

        in_valid = 1; load_slot = 0;
        above_result = 2;
        a = 1; b = 3;
        
        #10
        in_valid = 0;
        en = 1;
        #10

        if (result == 5) begin $display("Slot 1 calculated correctly, result correct. Result is %0d", result); end

        en = 0;
        load_slot = 1;
        b = 2;
        in_valid = 1;
        #10

        in_valid = 0;
        en = 1;
        #10

        if (result == 4) begin $display("Slot 2 calculated correctly, result correct. Result is %0d", result); end

        $finish;
    end
endmodule