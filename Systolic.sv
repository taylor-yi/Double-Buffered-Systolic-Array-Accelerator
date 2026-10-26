module Systolic #(parameter SIZE = 3) (
    input logic [3:0] a11, a12, a13, a21, a22, a23, a31, a32, a33,
    input logic [3:0] b11, b12, b13, b21, b22, b23, b31, b32, b33,

    input logic in_valid,

    output logic [8:0] C11, C12, C13, C21, C22, C23, C31, C32, C33,
    output logic out_valid
);

    logic [35:0] a_packed, b_packed;

    assign a_packed = {a33, a32, a31, a23, a22, a21, a13, a12, a11};
    assign b_packed = {b33, b32, b31, b23, b22, b21, b13, b12, b11};



endmodule