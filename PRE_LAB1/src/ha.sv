module ha(
    // input
    input logic A_i , 
                B_i ,

    // output
    output logic S_o ,
                 C_o 
);  
    assign S_o = A_i ^ B_i ;
    assign C_o = A_i & B_i ;
endmodule : ha
