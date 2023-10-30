/* verilator lint_off UNOPTFLAT */
module main 
#(
    parameter DATA_SIZE = 8
) (
    // input
        input logic  [DATA_SIZE-1:0]   A_i   ,
        input logic                    clk_i ,
                                       C_i   ,

    // output
        output reg                   overflowFlag_o ,
                                     carryFlag_o    ,
        output logic [DATA_SIZE-1:0]   S_o     
);
    // Declare value
    reg [DATA_SIZE-1:0] A_reg ;
    reg [DATA_SIZE-1:0] S_reg ;
    
    logic [DATA_SIZE-1:0] S_result_wire ;
    logic [DATA_SIZE-1:0] S_forward_wire ;
    logic [DATA_SIZE  :0] C_wire ;

    // Clock processing
    always @(posedge clk_i) begin : Update_IO
        A_reg <= A_i ;
        overflowFlag_o <= C_wire[DATA_SIZE] ^ C_wire[DATA_SIZE-1];
        carryFlag_o <= C_wire[DATA_SIZE] ;
        S_reg <= S_result_wire  ;
    end
    // Adding Component
    assign C_wire[0] = C_i ; 
    genvar i ;
    generate
        for (i = 0; i <= DATA_SIZE-1 ; i++ ) begin : FullAdder
            fa Adder(
                // Input
                .A_i(A_reg[i]) ,
                .B_i(S_forward_wire[i]) ,
                .C_i(C_wire[i]) ,

                // Output
                .S_o(S_result_wire[i]) ,
                .C_o(C_wire[i+1]) 
            );
        end
    endgenerate
    assign S_o = S_reg ;
    assign S_forward_wire = S_reg ;

endmodule : main
