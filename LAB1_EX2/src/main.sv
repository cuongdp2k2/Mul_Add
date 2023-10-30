/* verilator lint_off UNOPTFLAT */
module main 
#(
    parameter DATA_SIZE = 8
) (
    // input
        input logic  [DATA_SIZE-1:0]   A_i   , B_i ,
    //    input logic                    clk_i ,
        input logic                    M_i   ,

    // output
       // output reg                   overflowFlag_o ,
       //                              carryFlag_o    ,
        output logic                   C_o ,
        output logic [DATA_SIZE-1:0]   S_o     
);
    // Declare value  
    logic [DATA_SIZE  :0] C_wire ;

    // Adding Component
    assign C_wire[0] = M_i ; 
    genvar i ;
    generate
        for (i = 0; i <= DATA_SIZE-1 ; i++ ) begin : FullAdder
            fa Adder(
                // Input
                .A_i(A_i[i]) ,
                .B_i(B_i[i] ^ M_i) ,
                .C_i(C_wire[i]) ,

                // Output
                .S_o(S_o[i]) ,
                .C_o(C_wire[i+1]) 
            );
        end
    endgenerate
    assign C_o = C_wire[8] ;

endmodule : main
