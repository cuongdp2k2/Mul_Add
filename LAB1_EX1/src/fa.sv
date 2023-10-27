/* verilator lint_off UNOPTFLAT */
module fa(
    // input
    input logic A_i ,
                B_i ,
                C_i ,

    // output
    output logic S_o ,
                 C_o 
);
    logic C_temp1 , C_temp2 , S_temp ;

    ha half_adder1 (
        .A_i(A_i) ,
        .B_i(B_i) ,
        .S_o(S_temp) ,
        .C_o(C_temp1)
    );

    ha half_adder2 (
        .A_i(S_temp) ,
        .B_i(C_i) ,
        .S_o(S_o) ,
        .C_o(C_temp2) 
    );

    assign C_o = C_temp1 | C_temp2 ;
    
endmodule : fa
