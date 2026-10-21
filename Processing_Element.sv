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
    // assert property (@(posedge clk) disable iff (!rst_n) !(in_valid && en && (load_slot == compute_slot))) else $error("Loading into the compute slot.");

endmodule

module PE_tb ();
    logic clk, rst_n, in_valid, load_slot, compute_slot, en;
    logic [3:0] a, b;
    logic [9:0] above_result;
    logic [3:0] a_out, b_out;
    logic [9:0] result;

    PE dut(.*);

    int errors = 0, checks = 0, test_errors;

    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    initial begin
        $dumpfile("dump.vcd");     // the output file's name
        $dumpvars(0, PE_tb);    // depth 0 = this scope AND everything under it
    end

    initial begin
        test_errors = errors;

        @(negedge clk);
        rst_n = 0; 
        en = 0; 
        in_valid = 0;
        load_slot = 0;
        compute_slot = 0;
        a = 0; 
        b = 0;

        // Test 1: reset cannot be overriden
        @(negedge clk);

        en = 1; 
        in_valid = 1;
        load_slot = 0;
        compute_slot = 1;
        a = 4'b1000; 
        b = 4'b0100;

        @(negedge clk); // if (a_out !== '0 || b_out !== '0) begin $error("reset was overriden"); end

        checks++;
        if (a_out !== '0 || b_out !== '0 || result !== '0) begin
            errors++;
            $error("[%0t] reset overridden (b1 side): a_out=%0d b_out=%0d result=%0d", $time, a_out, b_out, result);
        end

        in_valid = 1;
        load_slot = 1;
        compute_slot = 0;
        a = 4'b0001; 
        b = 4'b0010;

        @(negedge clk);
        checks++;
        if (a_out !== '0 || b_out !== '0 || result !== '0) begin
            errors++;
            $error("[%0t] reset overridden (b2 side): a_out=%0d b_out=%0d result=%0d", $time, a_out, b_out, result);
        end

        if (errors == test_errors) $display("Test 1 passed: reset priority");
        else $display("Test 1 FAILED: reset priority");

        // Test 2: 
        $finish;
    end
endmodule