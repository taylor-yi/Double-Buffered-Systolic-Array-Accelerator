module PE(
    input logic clk, rst_n, in_valid, slot;
    input logic [3:0] a, b;
    output logic [9:0] result;
);

logic [9:0] accumulator;
logic [3:0] a, b1, b2;

always_ff @posedge(clk) begin
    if(!rst_n) begin
        result <= 10'b0000_0000_00;
        b1 <= 4'h0;
        b2 <= 4'h0;
    end else begin
        if(in_valid) begin
            if(slot) begin
                b1 <= b;
            end else begin
                b2 <=b;
            end
        end 
    end
end
endmodule