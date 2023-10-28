module top (
    // input
        input logic  [7:0]   dataA_i, dataB_i,
        input logic          clk_i, C_i      ,

    // output
        output logic [7:0]   S_o ,
        output logic         C_o   
     
);
    nAdder dut(
        .*
    );

    always @(posedge clk_i) begin
        
    end

endmodule : top
