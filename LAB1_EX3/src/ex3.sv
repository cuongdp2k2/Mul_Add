module ex3 (
    // input
        input logic [7:0] data_i [1:0] ,
        input logic       clk_i        ,
        input logic       EA_i         ,
        input logic       EB_i         ,

    // output
        output logic [15:0] P_o 

);
    reg [7:0] A_reg , B_reg ;
    reg [15:0] P_reg        ;

    logic [15:0] sum_temp   ;
    assign sum_temp = A_reg * B_reg ;
    assign P_o      = P_reg         ;

    always @(posedge clk_i) begin
        A_reg <= (EA_i) ? data_i[0] : 0 ;
        B_reg <= (EB_i) ? data_i[1] : 0 ;
        P_reg <= sum_temp               ;
    end

endmodule : ex3
