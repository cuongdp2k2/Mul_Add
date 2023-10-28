module core#(
    parameter DATA_SIZE = 8
)(
    //input
    input logic [DATA_SIZE-1:0] A_i ,
    input logic [DATA_SIZE-1:0] B_i ,
    input logic                 b_i ,
    input logic                 C_i ,
                                                          
    //output
    output logic [DATA_SIZE-1:0] S_o ,
    output logic                 C_o
); 
    logic [DATA_SIZE-1:0] and_wire;

    genvar i ;
    generate
        for(i=0; i<=DATA_SIZE-1; i++) begin : AND_Generator
            assign and_wire[i] = A_i[i] & b_i ;
        end
    endgenerate

    nAdder #( .BUS_SIZE( DATA_SIZE ) ) n_bit_Adder (
        // Input
        .dataA_i(and_wire) ,
        .dataB_i(B_i) ,
        .C_i    (C_i) ,

        //Output
        .S_o    (S_o) ,
        .C_o    (C_o)
    );

endmodule : core
