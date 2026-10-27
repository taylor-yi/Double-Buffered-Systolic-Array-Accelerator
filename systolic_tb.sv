`timescale 1ns/1ps
module systolic_tb();
    logic rst_n, clk;
    logic [3:0] a11, a12, a13, a21, a22, a23, a31, a32, a33;
    logic [3:0] b11, b12, b13, b21, b22, b23, b31, b32, b33;
    logic in_valid;
    logic [9:0] C11, C12, C13, C21, C22, C23, C31, C32, C33;
    logic out_valid;

    systolic dut (.*);

    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, systolic_tb);
    end

    int errors = 0, checks = 0, test_errors;

    // one test from the file up to 2 jobs
    int jobs, gap;
    logic [3:0] A [2][3][3];
    logic [3:0] B [2][3][3];
    int C_exp [2][3][3];

    // C pins as a matrix so we can loop over them
    logic [9:0] C_got [3][3];
    assign C_got = '{'{C11, C12, C13}, '{C21, C22, C23}, '{C31, C32, C33}};

    // drive one job onto the A and B pins
    task automatic set_pins(input int k);
        {a11, a12, a13} = {A[k][0][0], A[k][0][1], A[k][0][2]};
        {a21, a22, a23} = {A[k][1][0], A[k][1][1], A[k][1][2]};
        {a31, a32, a33} = {A[k][2][0], A[k][2][1], A[k][2][2]};

        {b11, b12, b13} = {B[k][0][0], B[k][0][1], B[k][0][2]};
        {b21, b22, b23} = {B[k][1][0], B[k][1][1], B[k][1][2]};
        {b31, b32, b33} = {B[k][2][0], B[k][2][1], B[k][2][2]};
    endtask

    // out_valid checker. outs_seen counts pulses, and each one is checked against the next expected C.
    // results only have to be right on the cycle out_valid is high.
    int outs_seen;

    always @(negedge clk) begin
        if (rst_n && out_valid) begin
            for (int i = 0; i < 3; i++) begin
                for (int j = 0; j < 3; j++) begin
                    checks++;
                    if (C_got[i][j] !== 10'(C_exp[outs_seen][i][j])) begin
                        errors++;
                        $error("[%0t] job %0d C%0d%0d: got %0d, expected %0d",
                                $time, outs_seen + 1, i + 1, j + 1, C_got[i][j], C_exp[outs_seen][i][j]);
                    end
                end
            end
            outs_seen++;
        end
    end

    initial begin
        string path;
        int fd, num_tests, n;

        if (!$value$plusargs("TESTS=%s", path)) path = "tests.txt";
        fd = $fopen(path, "r");
        if (fd == 0) begin
            $display("Could not open %s.", path);
            $finish;
        end

        n = $fscanf(fd, "%d", num_tests);

        rst_n = 0;
        in_valid = 0;
        jobs = 0;
        outs_seen = 0;

        A = '{default: '{default: '{default: '0}}};
        B = '{default: '{default: '{default: '0}}};
        set_pins(0);

        for (int t = 0; t < num_tests; t++) begin
            // read the test
            n = $fscanf(fd, "%d %d", jobs, gap);
            for (int k = 0; k < jobs; k++) begin
                for (int e = 0; e < 9; e++) begin 
                    n = $fscanf(fd, "%d", A[k][e/3][e%3]);
                end

                for (int e = 0; e < 9; e++) begin 
                    n = $fscanf(fd, "%d", B[k][e/3][e%3]); 
                end

                for (int e = 0; e < 9; e++) begin 
                    n = $fscanf(fd, "%d", C_exp[k][e/3][e%3]); 
                end
            end

            // reset between tests so every run starts from a clean array
            rst_n = 0;
            outs_seen = 0;
            repeat(2) @(negedge clk);
            rst_n = 1;
            test_errors = errors;

            // job 1
            @(negedge clk);
            set_pins(0);
            in_valid = 1;
            @(negedge clk);
            in_valid = 0;

            // job 2, gap cycles after job 1 (gap 1 = the very next cycle)
            if (jobs == 2) begin
                repeat(gap - 1) @(negedge clk);
                set_pins(1);
                in_valid = 1;
                @(negedge clk);
                in_valid = 0;
            end

            // scramble the pins so nothing can depend on them after in_valid drops
            {a11, a12, a13, a21, a22, a23, a31, a32, a33} = 36'hFFFF_FFFFF;
            {b11, b12, b13, b21, b22, b23, b31, b32, b33} = 36'hFFFF_FFFFF;

            // wait for every out_valid, with a timeout
            for (int w = 0; w < 40 && outs_seen < jobs; w++) begin
                @(negedge clk);
            end

            // a few more cycles to catch any extra out_valid
            repeat(5) @(negedge clk);

            checks++;
            if (outs_seen != jobs) begin
                errors++;
                $error("test %0d: got %0d out_valid pulses, expected %0d", t, outs_seen, jobs);
            end

            if (errors == test_errors) $display("Test %0d passed: %0d job(s), gap %0d", t, jobs, gap);
            else $display("Test %0d FAILED: %0d job(s), gap %0d", t, jobs, gap);
        end

        $fclose(fd);

        if (errors == 0) $display("PASS: %0d tests, %0d checks", num_tests, checks);
        else $display("FAIL: %0d errors in %0d checks", errors, checks);

        $finish;
    end

endmodule
