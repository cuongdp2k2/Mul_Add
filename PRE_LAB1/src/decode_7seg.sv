module decode_7seg #(
    parameter Out0 = 7'b0000001 ,
    parameter Out1 = 7'b1001111 ,
    parameter Out2 = 7'b0010010 ,
    parameter Out3 = 7'b0000110 ,
    parameter Out4 = 7'b1001100 ,
    parameter Out5 = 7'b0100100 ,
    parameter Out6 = 7'b0100000 ,
    parameter Out7 = 7'b0001111 ,
    parameter Out8 = 7'b0000000 ,
    parameter Out9 = 7'b0001100 ,
    parameter OutA = 7'b0001000 ,
    parameter OutB = 7'b1100000 ,
    parameter OutC = 7'b0110001 ,
    parameter OutD = 7'b1000010 ,
    parameter OutE = 7'b0110000 ,
    parameter OutF = 7'b0111000 
)(
    // input
    input logic [7:0] data_i ,

    // output
    output logic [6:0] data_o
);
    always_comb begin : decode
        case (data_i)
            "0" : data_o = Out0 ;  
            "1" : data_o = Out1 ; 
            "2" : data_o = Out2 ;
            "3" : data_o = Out3 ; 
            "4" : data_o = Out4 ;
            "5" : data_o = Out5 ; 
            "6" : data_o = Out6 ;
            "7" : data_o = Out7 ; 
            "8" : data_o = Out8 ;
            "9" : data_o = Out9 ;
            "A" : data_o = OutA ;
            "B" : data_o = OutB ;
            "C" : data_o = OutC ;
            "D" : data_o = OutD ; 
            "E" : data_o = OutE ; 
            "F" : data_o = OutF ;    
            default: data_o = 7'b0 ; 
        endcase
    end
endmodule : decode_7seg 
