module top (
    // input
        input logic [17:0] SW 		   ,
        input logic [3:0]  KEY         ,
        input logic       CLOCK_50     ,

    // output
        output logic [17:0] LEDR       ,
		  output logic [6:0]  HEX0 , HEX1, HEX2, HEX3, HEX4, HEX5, HEX6, HEX7
     
);
	logic [15:0] Output_wire ;

	 assign LEDR = SW ;
	 
    always@(negedge KEY[0]) begin
		case(SW[17:16])
			2'b00: Output_wire = {{8{SW[15]}},SW[15:8]} + {{8{SW[7]}},SW[7:0]} ; 
			2'b01: Output_wire = {{8{SW[15]}},SW[15:8]} - {{8{SW[7]}},SW[7:0]} ;
			2'b10: Output_wire = SW[15:8] * SW[7:0] ;
			default : Output_wire = 16'h0000 ;
		endcase
	 end

	decode_7seg Decode_HEX7 ( .data_i(SW[15:12]) 			, .data_o(HEX7) ) ;
	decode_7seg Decode_HEX6 ( .data_i(SW[11:8]) 			, .data_o(HEX6) ) ;
	decode_7seg Decode_HEX5 ( .data_i(SW[7:4]) 				, .data_o(HEX5) ) ;
	decode_7seg Decode_HEX4 ( .data_i(SW[3:0]) 				, .data_o(HEX4) ) ;
	decode_7seg Decode_HEX3 ( .data_i(Output_wire[15:12]) 	, .data_o(HEX3) ) ;
	decode_7seg Decode_HEX2 ( .data_i(Output_wire[11:8]) 	, .data_o(HEX2) ) ;
	decode_7seg Decode_HEX1 ( .data_i(Output_wire[7:4]) 	, .data_o(HEX1) ) ;
	decode_7seg Decode_HEX0 ( .data_i(Output_wire[3:0]) 	, .data_o(HEX0) ) ;
	 
endmodule : top
