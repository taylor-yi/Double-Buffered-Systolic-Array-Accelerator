`timescale 1ns/1ps
module Controller_tb();
    logic clk, rst_n, start;
    logic w_load, en, load_slot, row_slot, done, feed; //group a: w_load, en, feed / group b: load_slot, row_slot,
    logic [1:0] row_idx; // which row of A to feed this cycle

    logic slot_in [3];
    logic [3:0] a_in[3];
    logic [3:0] b_in[3][3];
    logic [9:0] result_matrix [3];

    Controller ctrl (.*);
    Systolic_Array dut(.*);

    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, Controller_tb);
    end

    int errors = 0, checks = 0, test_errors;

    int m;

    logic [3:0] A [3][3];
    logic [3:0] A2 [3][3];
    logic [3:0] W [3][3];
    logic [3:0] W2 [3][3];
    int C_exp [3][3];
    int C_exp2 [3][3];

    // expected controller outputs, t = cycles after start
    // t: 0 idle, 1 load, 2-4 feed_0, 5-7 feed_1, 8-11 drain, 12 done, 13 idle

    int e_w_load[14] = '{0,1,0,1,0,0,0,0,0,0,0,0,0,0};
    int e_load_slot[14] = '{0,0,0,1,0,0,0,0,0,0,0,0,0,0}; // only checked when w_load is high
    int e_en[14] = '{0,0,1,1,1,1,1,1,1,1,1,1,0,0};
    int e_feed[14] = '{0,0,1,1,1,1,1,1,0,0,0,0,0,0};
    int e_row_slot[14] = '{0,0,0,0,0,1,1,1,1,1,1,1,0,0};
    int e_row_idx[14] = '{0,0,0,1,2,0,1,2,0,0,0,0,0,0}; // only checked when feed is high
    int e_done[14] = '{0,0,0,0,0,0,0,0,0,0,0,0,1,0};
    int e_state[14] = '{0,1,2,2,2,3,3,3,4,4,4,4,5,0};

    // placeholders for mem_interface
    logic [3:0] cur_a [3];
    logic cur_s;
    logic [3:0] dly_a [2][3];
    logic dly_s [2];

    always_comb begin
        for(int i = 0; i < 3; i++) begin
            for(int j = 0; j < 3; j++) begin
                b_in[i][j] = load_slot ? W2[i][j] : W[i][j];
            end
        end

        for(int r = 0; r < 3; r++) begin
            cur_a[r] = feed ? (row_slot ? A2[row_idx][r] : A[row_idx][r]) : 4'h0;
        end
        cur_s = row_slot;

        a_in[0] = cur_a[0];
        a_in[1] = dly_a[0][1];
        a_in[2] = dly_a[1][2];
        slot_in[0] = cur_s;
        slot_in[1] = dly_s[0];
        slot_in[2] = dly_s[1];
    end

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            dly_a <= '{default: '{default: '0}};
            dly_s <= '{default: 1'b0};
        end else if (en) begin
            dly_a[1] <= dly_a[0];
            dly_a[0] <= cur_a;
            dly_s[1] <= dly_s[0];
            dly_s[0] <= cur_s;
        end
    end

    initial begin
        A = '{'{4'h1, 4'h2, 4'h3},
        '{4'h4, 4'h5, 4'h6},
        '{4'h7, 4'h8, 4'h9}};

        A2 = '{'{4'h9, 4'h8, 4'h7},
        '{4'h6, 4'h5, 4'h4},
        '{4'h3, 4'h2, 4'h1}};

        W = '{'{4'h1, 4'h0, 4'h2},
        '{4'h3, 4'h1, 4'h0},
        '{4'h0, 4'h2, 4'h1}};

        W2 = '{'{4'h2, 4'h1, 4'h0},
        '{4'h0, 4'h3, 4'h1},
        '{4'h1, 4'h0, 4'h2}};

        for (int i = 0; i < 3; i++) begin
            for (int j = 0; j < 3; j++) begin
                C_exp[i][j] = 0;
                C_exp2[i][j] = 0;
                for (int r = 0; r < 3; r++) begin
                    C_exp[i][j] += A[i][r] * W[r][j];
                    C_exp2[i][j] += A2[i][r] * W2[r][j];
                end
            end
        end

        rst_n = 0;
        start = 0;
        repeat(2) @(negedge clk);
        rst_n = 1;

        // Test 1: full back to back run, check every control output each cycle
        // and check both result matrices as they come out the bottom
        test_errors = errors;

        for (int t = 0; t < 14; t++) begin
            @(negedge clk);

            // control outputs
            checks++;
            if (w_load !== 1'(e_w_load[t]) || en !== 1'(e_en[t]) || feed !== 1'(e_feed[t]) ||
                row_slot !== 1'(e_row_slot[t]) || done !== 1'(e_done[t])) begin
                errors++;
                $error("[%0t] t=%0d: w_load=%0d en=%0d feed=%0d row_slot=%0d done=%0d, expected %0d %0d %0d %0d %0d",
                       $time, t, w_load, en, feed, row_slot, done,
                       e_w_load[t], e_en[t], e_feed[t], e_row_slot[t], e_done[t]);
            end

            if (w_load) begin
                checks++;
                if (load_slot !== 1'(e_load_slot[t])) begin
                    errors++;
                    $error("[%0t] t=%0d: load_slot=%0d, expected %0d", $time, t, load_slot, e_load_slot[t]);
                end
            end

            if (feed) begin
                checks++;
                if (row_idx !== 2'(e_row_idx[t])) begin
                    errors++;
                    $error("[%0t] t=%0d: row_idx=%0d, expected %0d", $time, t, row_idx, e_row_idx[t]);
                end
            end

            // results, stream row m is fed at t = m + 2 and comes out of column c at t = m + c + 5
            for (int c = 0; c < 3; c++) begin
                m = t - 5 - c;
                if (m >= 0 && m < 3) begin
                    checks++;
                    if (result_matrix[c] !== 10'(C_exp[m][c])) begin
                        errors++;
                        $error("[%0t] A C[%0d][%0d]: expected %0d, got %0d", $time, m, c, C_exp[m][c], result_matrix[c]);
                    end
                end
                else if (m >= 3 && m < 6) begin
                    checks++;
                    if (result_matrix[c] !== 10'(C_exp2[m-3][c])) begin
                        errors++;
                        $error("[%0t] A2 C[%0d][%0d]: expected %0d, got %0d", $time, m-3, c, C_exp2[m-3][c], result_matrix[c]);
                    end
                end
            end

            checks++;
            if (int'(ctrl.state) !== e_state[t]) begin
                errors++;
                $error("[%0t] t=%0d: state=%s, expected %0d", $time, t, ctrl.state.name(), e_state[t]);
            end

            start = (t == 0);
        end
        start = 0;

        if (errors == test_errors) $display("Test 1 passed: controller sequence and back to back results");
        else $display("Test 1 FAILED: controller sequence");

        // reset between runs, avoids the stale slot false alarm on the preload
        rst_n = 0;
        repeat(2) @(negedge clk);
        rst_n = 1;

        // Test 2: start pulse in the middle of a run should be ignored
        test_errors = errors;

        for (int t = 0; t < 16; t++) begin
            @(negedge clk);

            checks++;
            if (done !== (t == 12)) begin
                errors++;
                $error("[%0t] t=%0d: done=%0d, expected %0d", $time, t, done, (t == 12));
            end

            // nothing should restart after done
            if (t > 12) begin
                checks++;
                if (w_load !== 1'b0 || en !== 1'b0) begin
                    errors++;
                    $error("[%0t] t=%0d: controller restarted, w_load=%0d en=%0d", $time, t, w_load, en);
                end
            end

            checks++;
            if (int'(ctrl.state) !== e_state[t]) begin
                errors++;
                $error("[%0t] t=%0d: state=%s, expected %0d", $time, t, ctrl.state.name(), e_state[t]);
            end

            start = (t == 0 || t == 4); // second pulse lands during feed_0
        end
        start = 0;

        if (errors == test_errors) $display("Test 2 passed: start ignored while busy");
        else $display("Test 2 FAILED: start while busy");

        // Test 3: reset in the middle of a run
        test_errors = errors;

        @(negedge clk);
        start = 1;
        @(negedge clk);
        start = 0;
        repeat(4) @(negedge clk); // somewhere in feed_1

        rst_n = 0;
        @(negedge clk);
        checks++;
        if (w_load !== 1'b0 || en !== 1'b0 || feed !== 1'b0 || done !== 1'b0) begin
            errors++;
            $error("[%0t] reset didn't clear outputs: w_load=%0d en=%0d feed=%0d done=%0d", $time, w_load, en, feed, done);
        end

        // after reset it should sit in idle until the next start
        rst_n = 1;
        repeat(3) begin
            @(negedge clk);
            checks++;
            if (w_load !== 1'b0 || en !== 1'b0 || feed !== 1'b0 || done !== 1'b0) begin
                errors++;
                $error("[%0t] controller left idle without start", $time);
            end
        end

        if (errors == test_errors) $display("Test 3 passed: reset mid run");
        else $display("Test 3 FAILED: reset mid run");

        if (errors == 0) $display("PASS: %0d checks", checks);
        else $display("FAIL: %0d errors in %0d checks", errors, checks);

        $finish;
    end



endmodule