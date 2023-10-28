module decode_7seg #(
    parameter Out0 = 7'b1000000 ,
    parameter Out1 = 7'b1111001 ,
    parameter Out2 = 7'b0100100 ,
    parameter Out3 = 7'b0110000 ,
    parameter Out4 = 7'b0011001 ,
    parameter Out5 = 7'b0010010 ,
    parameter Out6 = 7'b0000010 ,
    parameter Out7 = 7'b1111000 ,
    parameter Out8 = 7'b0000000 ,
    parameter Out9 = 7'b0011000 ,
    parameter OutA = 7'b0001000 ,
    parameter OutB = 7'b0000011 ,
    parameter OutC = 7'b1000110 ,
    parameter OutD = 7'b0100001 ,
    parameter OutE = 7'b0000110 ,
    parameter OutF = 7'b0001110
)(
    // input
    input logic [4:0] data_i ,

    // output
    output logic [6:0] data_o
);
    always_comb begin : decode
        case (data_i)
            4'h0 :   data_o = Out0 ;  
            4'h1 :   data_o = Out1 ; 
            4'h2 :   data_o = Out2 ;
            4'h3 :   data_o = Out3 ; 
            4'h4 :   data_o = Out4 ;
            4'h5 :   data_o = Out5 ; 
            4'h6 :   data_o = Out6 ;
            4'h7 :   data_o = Out7 ; 
            4'h8 :   data_o = Out8 ;
            4'h9 :   data_o = Out9 ;
            4'hA :   data_o = OutA ;
            4'hB :   data_o = OutB ;
            4'hC :   data_o = OutC ;
            4'hD :   data_o = OutD ; 
            4'hE :   data_o = OutE ; 
            4'hF :   data_o = OutF ;    
            default: data_o = 7'b0 ; 
        endcase
    end
endmodule : decode_7seg 
