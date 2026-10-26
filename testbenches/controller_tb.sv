`timescale 1ns/1ps
module controller_tb();
    logic clk, rst_n, start;
    logic w_load, en, load_slot, row_slot, done, feed; //group a: w_load, en, feed / group b: load_slot, row_slot,
    logic [1:0] row_idx, entry_valid; // which row of A to feed this cycle

    logic slot_in [3];
    logic [3:0] a_in[3];
    logic [3:0] b_in[3][3];
    logic [9:0] result_matrix [3];

    controller ctrl (.*);
    systolic_array dut(.*);

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

    // Test 1 and 3: both jobs. t: 0 idle, 1 load, 2-4 feed_0, 5-7 feed_1, 8-11 drain, 12 done, 13 idle
    // w_load is high in load, and every feed_0 cycle where job 2 is in the buffer
    int e_w_load[14] = '{0,1,1,1,1,0,0,0,0,0,0,0,0,0};
    int e_load_slot[14] = '{0,0,1,1,1,0,0,0,0,0,0,0,0,0}; // only checked when w_load is high
    int e_en[14] = '{0,0,1,1,1,1,1,1,1,1,1,1,0,0};
    int e_feed[14] = '{0,0,1,1,1,1,1,1,0,0,0,0,0,0};
    int e_row_slot[14] = '{0,0,0,0,0,1,1,1,1,1,1,1,0,0};
    int e_row_idx[14] = '{0,0,0,1,2,0,1,2,0,0,0,0,0,0}; // only checked when feed is high
    int e_done[14] = '{0,0,0,0,0,0,0,0,0,0,0,0,1,0};
    int e_state[14] = '{0,1,2,2,2,3,3,3,4,4,4,4,5,0};

    // Test 2: single job. t: 0 idle, 1 load, 2-4 feed_0, 5-8 drain, 9 done, 10 idle
    int s_w_load[11] = '{0,1,0,0,0,0,0,0,0,0,0};
    int s_load_slot[11] = '{0,0,0,0,0,0,0,0,0,0,0};
    int s_en[11] = '{0,0,1,1,1,1,1,1,1,0,0};
    int s_feed[11] = '{0,0,1,1,1,0,0,0,0,0,0};
    int s_row_slot[11] = '{0,0,0,0,0,1,1,1,1,0,0};
    int s_row_idx[11] = '{0,0,0,1,2,0,0,0,0,0,0};
    int s_done[11] = '{0,0,0,0,0,0,0,0,0,1,0};
    int s_state[11] = '{0,1,2,2,2,4,4,4,4,5,0};

    // Test 3: job 2 shows up late in feed_0, so it only gets preloaded at t = 4
    int l_w_load[14] = '{0,1,0,0,1,0,0,0,0,0,0,0,0,0};
    int l_load_slot[14] = '{0,0,0,0,1,0,0,0,0,0,0,0,0,0};

    // placeholders for mem_interface
    // push0 / push1 stand in for in_valid capturing a job into spot 0 / spot 1
    logic push0, push1;

    always_ff @(posedge clk) begin
        if (!rst_n || done) begin
            entry_valid <= 2'b00;
        end else begin
            if (push0) entry_valid[0] <= 1'b1;
            if (push1) entry_valid[1] <= 1'b1;
        end
    end

    // assign job_ready = entry_valid[0];
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

    // check every controller output and the state against one row of a table
    task automatic check_ctrl(input int t, input int ew, input int els, input int een, input int efd,
                              input int ers, input int eri, input int edn, input int est);
        checks++;
        if (w_load !== 1'(ew) || en !== 1'(een) || feed !== 1'(efd) || row_slot !== 1'(ers) || done !== 1'(edn)) begin
            errors++;
            $error("[%0t] t=%0d: w_load=%0d en=%0d feed=%0d row_slot=%0d done=%0d, expected %0d %0d %0d %0d %0d",
                   $time, t, w_load, en, feed, row_slot, done, ew, een, efd, ers, edn);
        end

        if (w_load) begin
            checks++;
            if (load_slot !== 1'(els)) begin
                errors++;
                $error("[%0t] t=%0d: load_slot=%0d, expected %0d", $time, t, load_slot, els);
            end
        end

        if (feed) begin
            checks++;
            if (row_idx !== 2'(eri)) begin
                errors++;
                $error("[%0t] t=%0d: row_idx=%0d, expected %0d", $time, t, row_idx, eri);
            end
        end

        checks++;
        if (int'(ctrl.state) !== est) begin
            errors++;
            $error("[%0t] t=%0d: state=%s, expected %0d", $time, t, ctrl.state.name(), est);
        end
    endtask

    // results, stream row m is fed at t = m + 2 and comes out of column c at t = m + c + 5
    task automatic check_results(input int t, input bit two_jobs);
        int m;
        for (int c = 0; c < 3; c++) begin
            m = t - 5 - c;
            if (m >= 0 && m < 3) begin
                checks++;
                if (result_matrix[c] !== 10'(C_exp[m][c])) begin
                    errors++;
                    $error("[%0t] A C[%0d][%0d]: expected %0d, got %0d", $time, m, c, C_exp[m][c], result_matrix[c]);
                end
            end
            else if (two_jobs && m >= 3 && m < 6) begin
                checks++;
                if (result_matrix[c] !== 10'(C_exp2[m-3][c])) begin
                    errors++;
                    $error("[%0t] A2 C[%0d][%0d]: expected %0d, got %0d", $time, m-3, c, C_exp2[m-3][c], result_matrix[c]);
                end
            end
        end
    endtask

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
        push0 = 1;
        push1 = 1;

        for (int t = 0; t < 14; t++) begin
            @(negedge clk);
            check_ctrl(t, e_w_load[t], e_load_slot[t], e_en[t], e_feed[t],
                       e_row_slot[t], e_row_idx[t], e_done[t], e_state[t]);
            check_results(t, 1'b1);
            push0 = 0;
            push1 = 0;
        end

        if (errors == test_errors) $display("Test 1 passed: two jobs back to back");
        else $display("Test 1 FAILED: two jobs back to back");

        // reset between runs, avoids the stale slot false alarm on the preload
        rst_n = 0;
        repeat(2) @(negedge clk);
        rst_n = 1;

        // Test 2: only one job, should skip feed_1 and go straight to drain
        test_errors = errors;

        push0 = 1;

        for (int t = 0; t < 11; t++) begin
            @(negedge clk);
            check_ctrl(t, s_w_load[t], s_load_slot[t], s_en[t], s_feed[t],
                       s_row_slot[t], s_row_idx[t], s_done[t], s_state[t]);
            check_results(t, 1'b0);
            push0 = 0;
        end

        if (errors == test_errors) $display("Test 2 passed: single job");
        else $display("Test 2 FAILED: single job");

        rst_n = 0;
        repeat(2) @(negedge clk);
        rst_n = 1;

        // Test 3: job 2 arrives on the last feed_0 cycle, should still preload and run with zero gap
        test_errors = errors;

        push0 = 1;

        for (int t = 0; t < 14; t++) begin
            @(negedge clk);
            check_ctrl(t, l_w_load[t], l_load_slot[t], e_en[t], e_feed[t],
                       e_row_slot[t], e_row_idx[t], e_done[t], e_state[t]);
            check_results(t, 1'b1);
            push0 = 0;
            push1 = (t == 3); // lands in the buffer at t = 4, count 2 of feed_0
        end
        push1 = 0;

        if (errors == test_errors) $display("Test 3 passed: second job arrives late in feed_0");
        else $display("Test 3 FAILED: second job arrives late");

        rst_n = 0;
        repeat(2) @(negedge clk);
        rst_n = 1;

        // Test 4: reset in the middle of a run
        test_errors = errors;

        push0 = 1;
        push1 = 1;
        @(negedge clk);
        push0 = 0;
        push1 = 0;
        repeat(5) @(negedge clk); // somewhere in feed_1

        rst_n = 0;
        @(negedge clk);
        checks++;
        if (w_load !== 1'b0 || en !== 1'b0 || feed !== 1'b0 || done !== 1'b0 || entry_valid !== 2'b00) begin
            errors++;
            $error("[%0t] reset didn't clear: w_load=%0d en=%0d feed=%0d done=%0d entry_valid=%b",
                   $time, w_load, en, feed, done, entry_valid);
        end

        // after reset the buffer is empty, so it should sit in idle
        rst_n = 1;
        repeat(3) begin
            @(negedge clk);
            checks++;
            if (w_load !== 1'b0 || en !== 1'b0 || feed !== 1'b0 || done !== 1'b0) begin
                errors++;
                $error("[%0t] controller left idle with an empty buffer", $time);
            end
        end

        if (errors == test_errors) $display("Test 4 passed: reset mid run");
        else $display("Test 4 FAILED: reset mid run");

        if (errors == 0) $display("PASS: %0d checks", checks);
        else $display("FAIL: %0d errors in %0d checks", errors, checks);

        $finish;
    end

endmodule
