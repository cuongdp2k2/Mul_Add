module top #(
	parameter ADD = 2'b00 ,
	parameter SUB = 2'b01 ,
	parameter MUL = 2'b10 
) (
    // input
        input logic [17:0] SW 		   ,
        input logic [3:0]  KEY         ,
        input logic       CLOCK_50     ,

    // output
        output logic [17:0] LEDR       ,
		  output logic [6:0]  HEX0 , HEX1, HEX2, HEX3, HEX4, HEX5, HEX6, HEX7
     
);
	logic [15:0] Output_wire      ;
	logic [8:0]  nAdder_wire      ;
	logic [8:0]  nSub_wire 	      ;
	logic [15:0] Multipliers_wire ;
	logic        Carry_from_Add   ;
	logic		    Carry_from_Sub   ;

	assign LEDR = SW ;
	
	reg [7:0]  A_reg ;
	reg [7:0]  B_reg ;
	reg [15:0] Output_reg ;
	always @(posedge KEY[0]) begin : update_data
		if(KEY[1]) A_reg <= SW[15:8] ;
		if(KEY[2]) B_reg <= SW[7:0] ;
		if(KEY[3]) Output_reg <= Output_wire ;
	end
	
	nAdder #(.BUS_SIZE(8)) Add_Comp(
		// Input
		.dataA_i(A_reg)  ,
		.dataB_i(B_reg) ,
		.C_i    (0)        ,

		// Output
		.S_o   (nAdder_wire)    ,
		.C_o   (Carry_from_Add) ,
	);

	nAdder #(.BUS_SIZE(8)) SUB_Comp(
		// Input
		.dataA_i(A_reg)  		,
		.dataB_i(~B_reg + 1) ,
		.C_i    (0)        		,

		// Output
		.S_o   (nSub_wire)      ,
		.C_o   (Carry_from_Sub) ,
	);

	multipliers #(.DATA_SIZE(8)) Mul_comp(
		// input
		.A_i (A_reg) ,
		.B_i(B_reg) ,
		
		// output
		.P_o(Multipliers_wire)
	);

    // always@(negedge KEY[0]) begin
	// 	case(SW[17:16])
	// 		2'b00: 	  Output_wire = {{8{SW[15]}},SW[15:8]} + {{8{SW[7]}},SW[7:0]} ; 
	// 		2'b01: 	  Output_wire = {{8{SW[15]}},SW[15:8]} - {{8{SW[7]}},SW[7:0]} ;
	// 		2'b10: 	  Output_wire = SW[15:8] * SW[7:0] 							  ;
	// 		default : Output_wire = 16'h0000 									  ;
	// 	endcase
	//  end

	/*always @(posedge KEY[0] ) begin : ALU_op
		case (SW[17:16])
			ADD    :  Output_wire = {{8{nAdder_wire[7]}},nAdder_wire} ; 
			SUB    :  Output_wire = {{8{nSub_wire[7]}},nSub_wire}     ;
			MUL    :  Output_wire = Multipliers_wire                  ;
			default:  Output_wire = 16'b0 ;
		endcase
	end */
	
	alu ALU_process(
		.clk_i(KEY[0]) ,
		.Sel_i(SW[17:16]) ,
		.nAdder_wire(nAdder_wire) ,
		.nSub_wire(nSub_wire) ,
		.Multipliers_wire(Multipliers_wire) ,
		
		.Output_wire(Output_wire)
	);

	decode_7seg Decode_HEX7 ( .data_i(A_reg[7:4]) 			, .data_o(HEX7) ) ;
	decode_7seg Decode_HEX6 ( .data_i(A_reg[3:0]) 			, .data_o(HEX6) ) ;
	decode_7seg Decode_HEX5 ( .data_i(B_reg[7:4]) 			, .data_o(HEX5) ) ;
	decode_7seg Decode_HEX4 ( .data_i(B_reg[3:0]) 			, .data_o(HEX4) ) ;
	decode_7seg Decode_HEX3 ( .data_i(Output_reg[15:12]) 	, .data_o(HEX3) ) ;
	decode_7seg Decode_HEX2 ( .data_i(Output_reg[11:8]) 	, .data_o(HEX2) ) ;
	decode_7seg Decode_HEX1 ( .data_i(Output_reg[7:4]) 	, .data_o(HEX1) ) ;
	decode_7seg Decode_HEX0 ( .data_i(Output_reg[3:0]) 	, .data_o(HEX0) ) ;
	 
endmodule : top
