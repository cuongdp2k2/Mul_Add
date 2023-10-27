module top (
    // input
        input logic  [7:0]   A_i   ,
        input logic          clk_i ,
                             C_i   ,

    // output
        output reg          overflowFlag_o ,
                            carryFlag_o    ,
        output logic [7:0]  S_o   
     
);
    main dut(
        .*
    );

endmodule : top
