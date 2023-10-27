/* verilator lint_off UNOPTFLAT */
module nAdder #(
    parameter BUS_SIZE = 8
)(
    // input
    input logic [BUS_SIZE-1:0]  dataA_i ,
                                dataB_i ,
    input logic                 C_i     ,

    // output
    output logic[BUS_SIZE-1:0] S_o ,
    output logic                C_o 
);
    logic C_temp [BUS_SIZE:1] ;

    fa fulladder_0 (
        // input
        .A_i(dataA_i[0]) ,
        .B_i(dataB_i[0]) ,
        .C_i(C_i)        ,

        // output
        .S_o(S_o[0])     ,
        .C_o(C_temp[1])
    );

    genvar i ;
    generate
        for(i=1 ; i <= BUS_SIZE-1 ; i++) begin : generate_Adder_Block
            fa fulladder(
                // input
                .A_i(dataA_i[i]) ,
                .B_i(dataB_i[i]) ,
                .C_i(C_temp[i])  ,

                // output
                .S_o(S_o[i])     ,
                .C_o(C_temp[i+1])
            );
        end
    endgenerate

    assign C_o = C_temp[BUS_SIZE] ;

endmodule : nAdder