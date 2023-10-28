module ex4 #(
    parameter ADD_MODE = 3'b000 ,
    parameter SUB_MODE = 3'b001 ,
    parameter MUL_MODE = 3'b010 
) (
    // input
        input logic [7:0] data_i [1:0] ,
        input logic [2:0] sel_i        ,
        input logic       clk_i        ,
        input logic       EA_i         ,
        input logic       EB_i         ,

    // output
        output logic [15:0] P_o 

);
    reg [7:0] A_reg , B_reg ;
    reg [15:0] P_reg        ;

    logic [15:0] P_temp     ;
    assign P_o = P_reg      ;

    always_comb begin : ALU
        case (sel_i)
            ADD_MODE    : P_temp = {{8{A_reg[7]}},A_reg} + {{8{A_reg[7]}},B_reg} ;
            SUB_MODE    : P_temp = {8'b0,A_reg} - {8'b0,B_reg} ;
            MUL_MODE    : P_temp = A_reg * B_reg ; 
            default:      P_temp = 0             ;
        endcase
    end

    always @(posedge clk_i) begin
        A_reg <= (EA_i) ? data_i[0] : 0 ;
        B_reg <= (EB_i) ? data_i[1] : 0 ;
        P_reg <= P_temp                 ;
    end

endmodule : ex4
