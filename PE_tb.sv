`timescale 1ns/1ps
// Processing Element Testbench
module PE_tb ();
    logic clk, rst_n, w_load, load_slot, slot_in, en;
    logic [3:0] a, b;
    logic [9:0] above_result;
    logic [3:0] a_out;
    logic slot_out;
    logic [9:0] result;

    logic new_test;

    processing_element dut(.*);

    int errors = 0, checks = 0, test_errors;

    logic [9:0] expected;


    logic [3:0] prev_a;

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
        w_load = 0;
        load_slot = 0;
        slot_in = 0;
        a = 0; 
        b = 0;

        // Test 1: reset cannot be overriden
        @(negedge clk);

        en = 1; 
        w_load = 1;
        load_slot = 0;
        slot_in = 1;
        a = 4'b1000; 
        b = 4'b0100;

        @(negedge clk); // if (a_out !== '0 || b_out !== '0) begin $error("reset was overriden"); end

        checks++;
        if (a_out !== '0 || dut.b1 !== '0 || result !== '0) begin
            errors++;
            $error("[%0t] reset overridden (b1 side): a_out=%0d dut.b1=%0d result=%0d", $time, a_out, dut.b1, result);
        end

        w_load = 1;
        load_slot = 1;
        slot_in = 0;
        a = 4'b0001; 
        b = 4'b0010;

        @(negedge clk);
        checks++;
        if (a_out !== '0 || dut.b2 !== '0 || result !== '0) begin
            errors++;
            $error("[%0t] reset overridden (b2 side): a_out=%0d dut.b2=%0d result=%0d", $time, a_out, dut.b2, result);
        end

        if (errors == test_errors) $display("Test 1 passed: reset priority");
        else $display("Test 1 FAILED: reset priority");

        // repeat (2) @(negedge clk);

        // Test 2: weight loading
        rst_n = 1;

        w_load = 1;
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
        if (dut.b !== 4'b0010) begin
            errors++;
            $error("[%0t] dut.b: dut.b expected: 0010, b was: %0d", $time, dut.b);
        end

        if (errors == test_errors) $display("Test 3 passed: weight shift chain");
        else $display("Test 3 FAILED: weight shift chain");

        // Test 4: compute slot
        rst_n = 0;
        
        @(negedge clk);
        en = 0;
        w_load = 1;
        rst_n = 1;
        slot_in = 1;
        load_slot = 0;
        b = 4'b0011;
        
        @(negedge clk);
        en = 1;
        w_load = 1;
        slot_in = 0;
        load_slot = 1;
        a = 4'b0001;
        b = 4'b0101;
        above_result = 10'b00_0000_0101;

        @(negedge clk);
        if (result !== 8) begin
            errors++;
            $error("[%0t] result computed incorrectly for compute slot 0: result expected: 8, b was: %0d", $time, result);
        end
        
        slot_in = 1;

        @(negedge clk);
        if (result !== 10) begin
            errors++;
            $error("[%0t] result computed incorrectly for compute slot 1: result expected: 10, b was: %0d", $time, result);
        end

        if (errors == test_errors) $display("Test 4 passed: compute slot verification");
        else $display("Test 4 FAILED: compute slot verification");

        //Test 5: MAC Correctness
        rst_n = 0;

        @(negedge clk);
        rst_n = 1;
        for (int s = 0; s < 2; s++) begin
            for (int w = 0; w < 16; w++) begin
                @(negedge clk);
                en = 0;
                w_load = 1;
                load_slot = s[0];
                b = w[3:0];

                @(negedge clk);
                w_load = 0;
                slot_in = s[0];

                for (int av = 0; av < 16; av++) begin
                    a = av[3:0];
                    above_result = 10'($urandom_range(0, 450));
                    expected = 10'(above_result + av * w);
                    en = 1;

                    @(negedge clk);
                    checks++;
                    if (result !== expected) begin
                        errors++;
                        $error("[%0t] MAC slot=%0d a=%0d w=%0d above=%0d: got %0d, expected %0d", $time, s, av, w, above_result, result, expected);
                    end
                end
                en = 0;
            end
        end

        if (errors == test_errors) $display("Test 5 passed: MAC verification");
        else $display("Test 5 FAILED: MAC verification");

        // Test 6: activation forwarding, check 1 cycle delay from a to a_out
        rst_n = 0;

        @(negedge clk);
        rst_n = 1;
        en = 1;
        a = 4'hF;
        prev_a = a;

        for (int i = 0; i < 16; i++) begin
            @(negedge clk);
            checks++;
            if (a_out !== prev_a) begin
                errors++;
                $error("[%0t] a_out=%0d, expected %0d (previous a)", $time, a_out, prev_a);
            end

            // drive the new value, then confirm a_out hasn't followed it yet
            a = i[3:0];
            #1;
            checks++;
            if (a_out !== prev_a) begin
                errors++;
                $error("[%0t] a_out changed before the clock edge (combinational path?)", $time);
            end

            prev_a = a;
        end
        
        if (errors == test_errors) $display("Test 6 passed: activation forwarding");
        else $display("Test 6 FAILED: activation forwarding");

        $finish;
    end
endmodule