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

    logic new_test;

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

        // repeat (2) @(negedge clk);

        // Test 2: weight loading
        rst_n = 1;

        in_valid = 1;
        load_slot = 0; // loading b1 register
        b = 4'b0010;
        
        @(negedge clk);
        checks++;
        if (dut.b1 !== 4'b0010) begin
            errors++;
            $error("[%0t] b1 loaded incorrectly: b1 expected: 0010, b1 was: %0d", $time, dut.b1);
        end

        load_slot = 1; // loading b2 register
        b = 4'b0100;

        @(negedge clk);
        checks++;
        if (dut.b2 !== 4'b0100) begin
            errors++;
            $error("[%0t] b2 loaded incorrectly: b2 expected: 0010, b2 was: %0d", $time, dut.b2);
        end

        if (errors == test_errors) $display("Test 2 passed: weight loading");
        else $display("Test 2 FAILED: weight loading");

        // Test 3: weight shift chain
        b = 4'b0001;
        load_slot = 0;

        @(negedge clk);
        if (b !== 4'b0001) begin
            errors++;
            $error("[%0t] b not reading correctly: b expected: 0001, b was: %0d", $time, b);
        end
        
        b = 4'b0010;
        load_slot = 1;
        
        if (b !== 4'b0010) begin
            errors++;
            $error("[%0t] slot did not fire correctly: b expected: 0010, b was: %0d", $time, b);
        end

        @(negedge clk);
        if (b_out !== 4'b0010) begin
            errors++;
            $error("[%0t] b_out: b_out expected: 0010, b was: %0d", $time, b_out);
        end

        if (errors == test_errors) $display("Test 3 passed: weight shift chain");
        else $display("Test 2 FAILED: weight shift chain");

        // Test 4: compute slot
        rst_n = 0;
        
        @(negedge clk);
        en = 0;
        in_valid = 1;
        rst_n = 1;
        compute_slot = 1;
        load_slot = 0;
        b = 4'b0011;
        
        @(negedge clk);
        en = 1;
        in_valid = 1;
        compute_slot = 0;
        load_slot = 1;
        a = 4'b0001;
        b = 4'b0101;
        above_result = 10'b00_0000_0101;

        @(negedge clk);
        if (result !== 8) begin
            errors++;
            $error("[%0t] result computed incorrectly for compute slot 0: result expected: 8, b was: %0d", $time, result);
        end
        
        compute_slot = 1;

        @(negedge clk);
        if (result !== 10) begin
            errors++;
            $error("[%0t] result computed incorrectly for compute slot 1: result expected: 10, b was: %0d", $time, result);
        end

        if (errors == test_errors) $display("Test 4 passed: compute slot verification");
        else $display("Test 2 FAILED: compute slot verification");

        $finish;
    end
endmodule