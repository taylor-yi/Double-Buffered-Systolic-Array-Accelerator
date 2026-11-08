module controller (
	clk,
	rst_n,
	entry_valid,
	w_load,
	en,
	load_slot,
	row_slot,
	done,
	feed,
	row_idx
);
	reg _sv2v_0;
	parameter SIZE = 3;
	input wire clk;
	input wire rst_n;
	input wire [1:0] entry_valid;
	output reg w_load;
	output reg en;
	output reg load_slot;
	output reg row_slot;
	output reg done;
	output reg feed;
	output reg [$clog2(SIZE) - 1:0] row_idx;
	reg [2:0] state;
	reg [2:0] next_state;
	localparam DRAIN_CYCLES = 2 * (SIZE - 1);
	localparam PRELOAD_AT = 1;
	localparam CW = $clog2((DRAIN_CYCLES > SIZE ? DRAIN_CYCLES : SIZE));
	reg [CW - 1:0] cycle_count;
	always @(posedge clk)
		if (!rst_n) begin
			state <= 3'd0;
			cycle_count <= 1'sb0;
		end
		else begin
			state <= next_state;
			if (next_state != state)
				cycle_count <= 1'sb0;
			else
				cycle_count <= cycle_count + 1;
		end
	function automatic [$clog2(SIZE) - 1:0] sv2v_cast_E1674;
		input reg [$clog2(SIZE) - 1:0] inp;
		sv2v_cast_E1674 = inp;
	endfunction
	function automatic signed [CW - 1:0] sv2v_cast_D0DBC_signed;
		input reg signed [CW - 1:0] inp;
		sv2v_cast_D0DBC_signed = inp;
	endfunction
	always @(*) begin
		if (_sv2v_0)
			;
		next_state = state;
		w_load = 1'b0;
		en = 1'b0;
		load_slot = 1'b0;
		row_slot = 1'b0;
		feed = 1'b0;
		done = 1'b0;
		row_idx = sv2v_cast_E1674(cycle_count);
		case (state)
			3'd0:
				if (entry_valid[0])
					next_state = 3'd1;
			3'd1: begin
				w_load = 1'b1;
				load_slot = 1'b0;
				next_state = 3'd2;
			end
			3'd2: begin
				en = 1'b1;
				feed = 1'b1;
				row_slot = 1'b0;
				if (entry_valid[1]) begin
					w_load = 1'b1;
					load_slot = 1'b1;
				end
				if (cycle_count == sv2v_cast_D0DBC_signed(SIZE - 1)) begin
					if (entry_valid[1])
						next_state = 3'd3;
					else
						next_state = 3'd4;
				end
			end
			3'd3: begin
				en = 1'b1;
				feed = 1'b1;
				row_slot = 1'b1;
				if (cycle_count == sv2v_cast_D0DBC_signed(SIZE - 1))
					next_state = 3'd4;
			end
			3'd4: begin
				en = 1'b1;
				row_slot = 1'b1;
				if (cycle_count == sv2v_cast_D0DBC_signed(DRAIN_CYCLES - 1))
					next_state = 3'd5;
			end
			3'd5: begin
				done = 1'b1;
				next_state = 3'd0;
			end
			default: next_state = 3'd0;
		endcase
	end
	initial _sv2v_0 = 0;
endmodule
module mem_interface (
	clk,
	rst_n,
	load_slot,
	feed,
	row_slot,
	en,
	done,
	row_idx,
	entry_valid,
	in_valid,
	a_packed,
	b_packed,
	a_skewed,
	skewed_slot,
	b_out,
	results_in,
	results_packed,
	out_valid
);
	reg _sv2v_0;
	parameter SIZE = 3;
	input wire clk;
	input wire rst_n;
	input wire load_slot;
	input wire feed;
	input wire row_slot;
	input wire en;
	input wire done;
	input wire [$clog2(SIZE) - 1:0] row_idx;
	output reg [1:0] entry_valid;
	input wire in_valid;
	input wire [((SIZE * SIZE) * 4) - 1:0] a_packed;
	input wire [((SIZE * SIZE) * 4) - 1:0] b_packed;
	output wire [(SIZE * 4) - 1:0] a_skewed;
	output wire [0:SIZE - 1] skewed_slot;
	output reg [((SIZE * SIZE) * 4) - 1:0] b_out;
	input wire [(SIZE * 10) - 1:0] results_in;
	output wire [((10 * SIZE) * SIZE) - 1:0] results_packed;
	output wire out_valid;
	localparam RW = $clog2(SIZE);
	wire [((SIZE * SIZE) * 4) - 1:0] a_internal;
	wire [((SIZE * SIZE) * 4) - 1:0] b_internal;
	genvar _gv_i_1;
	genvar _gv_j_1;
	generate
		for (_gv_i_1 = 0; _gv_i_1 < SIZE; _gv_i_1 = _gv_i_1 + 1) begin : unpack
			localparam i = _gv_i_1;
			for (_gv_j_1 = 0; _gv_j_1 < SIZE; _gv_j_1 = _gv_j_1 + 1) begin : genblk1
				localparam j = _gv_j_1;
				assign a_internal[((((SIZE - 1) - i) * SIZE) + ((SIZE - 1) - j)) * 4+:4] = a_packed[(((4 * SIZE) * i) + (4 * j)) + 3:((4 * SIZE) * i) + (4 * j)];
				assign b_internal[((((SIZE - 1) - i) * SIZE) + ((SIZE - 1) - j)) * 4+:4] = b_packed[(((4 * SIZE) * i) + (4 * j)) + 3:((4 * SIZE) * i) + (4 * j)];
			end
		end
	endgenerate
	reg [(((2 * SIZE) * SIZE) * 4) - 1:0] A_buf;
	reg [(((2 * SIZE) * SIZE) * 4) - 1:0] B_buf;
	reg wr_ptr;
	function automatic [(SIZE * 4) - 1:0] sv2v_cast_C8781;
		input reg [(SIZE * 4) - 1:0] inp;
		sv2v_cast_C8781 = inp;
	endfunction
	function automatic [((SIZE * SIZE) * 4) - 1:0] sv2v_cast_3D5C6;
		input reg [((SIZE * SIZE) * 4) - 1:0] inp;
		sv2v_cast_3D5C6 = inp;
	endfunction
	always @(posedge clk)
		if (!rst_n || done) begin
			entry_valid <= 2'b00;
			wr_ptr <= 1'b0;
			A_buf <= {2 {sv2v_cast_3D5C6({SIZE {sv2v_cast_C8781({SIZE {4'b0000}})}})}};
			B_buf <= {2 {sv2v_cast_3D5C6({SIZE {sv2v_cast_C8781({SIZE {4'b0000}})}})}};
		end
		else if (in_valid && !entry_valid[wr_ptr]) begin
			A_buf[4 * (SIZE * ((1 - wr_ptr) * SIZE))+:4 * (SIZE * SIZE)] <= a_internal;
			B_buf[4 * (SIZE * ((1 - wr_ptr) * SIZE))+:4 * (SIZE * SIZE)] <= b_internal;
			entry_valid[wr_ptr] <= 1'b1;
			wr_ptr <= ~wr_ptr;
		end
	always @(*) begin
		if (_sv2v_0)
			;
		b_out = B_buf[4 * (SIZE * ((1 - load_slot) * SIZE))+:4 * (SIZE * SIZE)];
	end
	reg [3:0] a_row [0:SIZE - 1];
	always @(*) begin
		if (_sv2v_0)
			;
		begin : sv2v_autoblock_1
			reg signed [31:0] c;
			for (c = 0; c < SIZE; c = c + 1)
				a_row[c] = (feed ? A_buf[(((((1 - row_slot) * SIZE) + ((SIZE - 1) - row_idx)) * SIZE) + ((SIZE - 1) - c)) * 4+:4] : 4'h0);
		end
	end
	wire [3:0] skew_a [0:SIZE - 1][0:SIZE - 1];
	genvar _gv_r_1;
	genvar _gv_c_1;
	generate
		for (_gv_r_1 = 0; _gv_r_1 < SIZE; _gv_r_1 = _gv_r_1 + 1) begin : genblk2
			localparam r = _gv_r_1;
			if (r == 0) begin : genblk1
				assign a_skewed[((SIZE - 1) - r) * 4+:4] = a_row[r];
				assign skewed_slot[r] = row_slot;
			end
			else begin : genblk1
				reg [(r * 4) - 1:0] a_dly;
				reg [0:r - 1] slot_dly;
				always @(posedge clk)
					if (!rst_n) begin
						a_dly <= {_gv_r_1 {4'b0000}};
						slot_dly <= {_gv_r_1 {1'b0}};
					end
					else if (en) begin
						a_dly[(_gv_r_1 - 1) * 4+:4] <= a_row[r];
						slot_dly[0] <= row_slot;
						begin : sv2v_autoblock_2
							reg signed [31:0] d;
							for (d = 1; d < r; d = d + 1)
								begin
									a_dly[((_gv_r_1 - 1) - d) * 4+:4] <= a_dly[((_gv_r_1 - 1) - (d - 1)) * 4+:4];
									slot_dly[d] <= slot_dly[d - 1];
								end
						end
					end
				assign a_skewed[((SIZE - 1) - r) * 4+:4] = a_dly[((_gv_r_1 - 1) - (r - 1)) * 4+:4];
				assign skewed_slot[r] = slot_dly[r - 1];
			end
		end
	endgenerate
	reg [((SIZE * SIZE) * 10) - 1:0] results_internal;
	wire [(SIZE * 10) - 1:0] deskewed;
	generate
		for (_gv_c_1 = 0; _gv_c_1 < SIZE; _gv_c_1 = _gv_c_1 + 1) begin : unskew
			localparam c = _gv_c_1;
			if (c == (SIZE - 1)) begin : genblk1
				assign deskewed[((SIZE - 1) - c) * 10+:10] = results_in[((SIZE - 1) - c) * 10+:10];
			end
			else begin : genblk1
				reg [(((SIZE - 1) - c) * 10) - 1:0] dly;
				always @(posedge clk)
					if (!rst_n)
						dly <= {(SIZE - 1) - _gv_c_1 {10'b0000000000}};
					else begin
						dly[(((SIZE - 1) - _gv_c_1) - 1) * 10+:10] <= results_in[((SIZE - 1) - c) * 10+:10];
						begin : sv2v_autoblock_3
							reg signed [31:0] k;
							for (k = 1; k < ((SIZE - 1) - c); k = k + 1)
								dly[((((SIZE - 1) - _gv_c_1) - 1) - k) * 10+:10] <= dly[((((SIZE - 1) - _gv_c_1) - 1) - (k - 1)) * 10+:10];
						end
					end
				assign deskewed[((SIZE - 1) - c) * 10+:10] = dly[((((SIZE - 1) - _gv_c_1) - 1) - ((SIZE - 2) - c)) * 10+:10];
			end
		end
	endgenerate
	function automatic [(SIZE * 10) - 1:0] sv2v_cast_371F6;
		input reg [(SIZE * 10) - 1:0] inp;
		sv2v_cast_371F6 = inp;
	endfunction
	always @(posedge clk)
		if (!rst_n)
			results_internal <= {SIZE {sv2v_cast_371F6({SIZE {10'd0}})}};
		else begin
			results_internal[10 * ((SIZE - 1) * SIZE)+:10 * SIZE] <= deskewed;
			begin : sv2v_autoblock_4
				reg signed [31:0] k;
				for (k = 1; k < SIZE; k = k + 1)
					results_internal[10 * (((SIZE - 1) - k) * SIZE)+:10 * SIZE] <= results_internal[10 * (((SIZE - 1) - (k - 1)) * SIZE)+:10 * SIZE];
			end
		end
	localparam MARK_DLY = 2 * SIZE;
	reg [0:MARK_DLY - 1] mark;
	function automatic signed [$clog2(SIZE) - 1:0] sv2v_cast_E1674_signed;
		input reg signed [$clog2(SIZE) - 1:0] inp;
		sv2v_cast_E1674_signed = inp;
	endfunction
	always @(posedge clk)
		if (!rst_n)
			mark <= {MARK_DLY {1'b0}};
		else begin
			mark[0] <= feed && (row_idx == sv2v_cast_E1674_signed(SIZE - 1));
			begin : sv2v_autoblock_5
				reg signed [31:0] k;
				for (k = 1; k < MARK_DLY; k = k + 1)
					mark[k] <= mark[k - 1];
			end
		end
	assign out_valid = mark[MARK_DLY - 1];
	generate
		for (_gv_i_1 = 0; _gv_i_1 < SIZE; _gv_i_1 = _gv_i_1 + 1) begin : repack
			localparam i = _gv_i_1;
			for (_gv_j_1 = 0; _gv_j_1 < SIZE; _gv_j_1 = _gv_j_1 + 1) begin : genblk1
				localparam j = _gv_j_1;
				assign results_packed[(((10 * SIZE) * i) + (10 * j)) + 9:((10 * SIZE) * i) + (10 * j)] = results_internal[((((SIZE - 1) - ((SIZE - 1) - i)) * SIZE) + ((SIZE - 1) - j)) * 10+:10];
			end
		end
	endgenerate
	initial _sv2v_0 = 0;
endmodule
module processing_element (
	clk,
	rst_n,
	w_load,
	load_slot,
	slot_in,
	en,
	a,
	b,
	above_result,
	slot_out,
	a_out,
	result
);
	input wire clk;
	input wire rst_n;
	input wire w_load;
	input wire load_slot;
	input wire slot_in;
	input wire en;
	input wire [3:0] a;
	input wire [3:0] b;
	input wire [9:0] above_result;
	output reg slot_out;
	output reg [3:0] a_out;
	output reg [9:0] result;
	reg [3:0] b1;
	reg [3:0] b2;
	wire [3:0] w;
	wire zeroed;
	assign w = (slot_in ? b2 : b1);
	assign zeroed = (a == {4 {1'sb0}}) || (w == {4 {1'sb0}});
	always @(posedge clk)
		if (!rst_n) begin
			b1 <= 4'h0;
			b2 <= 4'h0;
		end
		else if (w_load) begin
			if (load_slot)
				b2 <= b;
			else
				b1 <= b;
		end
	always @(posedge clk)
		if (!rst_n) begin
			result <= 1'sb0;
			a_out <= 1'sb0;
			slot_out <= 1'b0;
		end
		else if (en) begin
			a_out <= a;
			slot_out <= slot_in;
			result <= (zeroed ? above_result : above_result + (a * w));
		end
endmodule
module systolic_array (
	clk,
	rst_n,
	en,
	w_load,
	load_slot,
	slot_in,
	a_in,
	b_in,
	result_matrix
);
	parameter SIZE = 3;
	input wire clk;
	input wire rst_n;
	input wire en;
	input wire w_load;
	input wire load_slot;
	input wire [0:SIZE - 1] slot_in;
	input wire [(SIZE * 4) - 1:0] a_in;
	input wire [((SIZE * SIZE) * 4) - 1:0] b_in;
	output wire [(SIZE * 10) - 1:0] result_matrix;
	wire [3:0] a_wire [SIZE - 1:0][SIZE - 1:0];
	wire [9:0] p_wire [SIZE - 1:0][SIZE - 1:0];
	wire slot_wire [0:SIZE - 1][0:SIZE - 1];
	genvar _gv_r_2;
	generate
		for (_gv_r_2 = 0; _gv_r_2 < SIZE; _gv_r_2 = _gv_r_2 + 1) begin : row
			localparam r = _gv_r_2;
			genvar _gv_c_2;
			for (_gv_c_2 = 0; _gv_c_2 < SIZE; _gv_c_2 = _gv_c_2 + 1) begin : col
				localparam c = _gv_c_2;
				localparam [9:0] sv2v_uu_PE_ext_above_result_0 = 1'sb0;
				processing_element PE(
					.clk(clk),
					.rst_n(rst_n),
					.w_load(w_load),
					.load_slot(load_slot),
					.slot_in((c == 0 ? slot_in[r] : slot_wire[r][c - 1])),
					.en(en),
					.a((c == 0 ? a_in[((SIZE - 1) - r) * 4+:4] : a_wire[r][c - 1])),
					.b(b_in[((((SIZE - 1) - r) * SIZE) + ((SIZE - 1) - c)) * 4+:4]),
					.above_result((r == 0 ? sv2v_uu_PE_ext_above_result_0 : p_wire[r - 1][c])),
					.slot_out(slot_wire[r][c]),
					.a_out(a_wire[r][c]),
					.result(p_wire[r][c])
				);
			end
		end
	endgenerate
	genvar _gv_c_3;
	generate
		for (_gv_c_3 = 0; _gv_c_3 < SIZE; _gv_c_3 = _gv_c_3 + 1) begin : outputs
			localparam c = _gv_c_3;
			assign result_matrix[((SIZE - 1) - c) * 10+:10] = p_wire[SIZE - 1][c];
		end
	endgenerate
endmodule
module systolic_top (
	clk,
	rst_n,
	a11,
	a12,
	a13,
	a21,
	a22,
	a23,
	a31,
	a32,
	a33,
	b11,
	b12,
	b13,
	b21,
	b22,
	b23,
	b31,
	b32,
	b33,
	in_valid,
	C11,
	C12,
	C13,
	C21,
	C22,
	C23,
	C31,
	C32,
	C33,
	out_valid
);
	reg _sv2v_0;
	parameter SIZE = 3;
	input clk;
	input rst_n;
	input wire [3:0] a11;
	input wire [3:0] a12;
	input wire [3:0] a13;
	input wire [3:0] a21;
	input wire [3:0] a22;
	input wire [3:0] a23;
	input wire [3:0] a31;
	input wire [3:0] a32;
	input wire [3:0] a33;
	input wire [3:0] b11;
	input wire [3:0] b12;
	input wire [3:0] b13;
	input wire [3:0] b21;
	input wire [3:0] b22;
	input wire [3:0] b23;
	input wire [3:0] b31;
	input wire [3:0] b32;
	input wire [3:0] b33;
	input wire in_valid;
	output reg [9:0] C11;
	output reg [9:0] C12;
	output reg [9:0] C13;
	output reg [9:0] C21;
	output reg [9:0] C22;
	output reg [9:0] C23;
	output reg [9:0] C31;
	output reg [9:0] C32;
	output reg [9:0] C33;
	output wire out_valid;
	wire [35:0] a_packed;
	wire [35:0] b_packed;
	assign a_packed = {a33, a32, a31, a23, a22, a21, a13, a12, a11};
	assign b_packed = {b33, b32, b31, b23, b22, b21, b13, b12, b11};
	wire [1:0] entry_valid;
	wire w_load;
	wire en;
	wire load_slot;
	wire row_slot;
	wire done;
	wire feed;
	wire [$clog2(SIZE) - 1:0] row_idx;
	wire [(SIZE * 4) - 1:0] a_skewed;
	wire [0:SIZE - 1] slot_data;
	wire [((SIZE * SIZE) * 4) - 1:0] b_wires;
	wire [((10 * SIZE) * SIZE) - 1:0] results_packed;
	wire [(SIZE * 10) - 1:0] result_matrix;
	always @(*) begin
		if (_sv2v_0)
			;
		C11 = results_packed[9:0];
		C12 = results_packed[19:10];
		C13 = results_packed[29:20];
		C21 = results_packed[39:30];
		C22 = results_packed[49:40];
		C23 = results_packed[59:50];
		C31 = results_packed[69:60];
		C32 = results_packed[79:70];
		C33 = results_packed[89:80];
	end
	controller #(.SIZE(SIZE)) controlla(
		.clk(clk),
		.rst_n(rst_n),
		.entry_valid(entry_valid),
		.w_load(w_load),
		.en(en),
		.load_slot(load_slot),
		.row_slot(row_slot),
		.done(done),
		.feed(feed),
		.row_idx(row_idx)
	);
	mem_interface #(.SIZE(SIZE)) memi(
		.clk(clk),
		.rst_n(rst_n),
		.load_slot(load_slot),
		.feed(feed),
		.row_slot(row_slot),
		.en(en),
		.done(done),
		.row_idx(row_idx),
		.entry_valid(entry_valid),
		.in_valid(in_valid),
		.a_packed(a_packed),
		.b_packed(b_packed),
		.a_skewed(a_skewed),
		.skewed_slot(slot_data),
		.b_out(b_wires),
		.results_in(result_matrix),
		.results_packed(results_packed),
		.out_valid(out_valid)
	);
	systolic_array #(.SIZE(SIZE)) array(
		.clk(clk),
		.rst_n(rst_n),
		.en(en),
		.w_load(w_load),
		.load_slot(load_slot),
		.slot_in(slot_data),
		.a_in(a_skewed),
		.b_in(b_wires),
		.result_matrix(result_matrix)
	);
	initial _sv2v_0 = 0;
endmodule
