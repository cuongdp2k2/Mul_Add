#define MAX_SIM 2000

void set_random(Vtop *dut, vluint64_t sim_unit) {
	dut->data_i[0] = rand()%256 ;
	dut->data_i[1] = rand()%256 ;
	dut->EA_i = 1 ;
	dut->EB_i = 1 ;
	dut->sel_i = rand()%3 ;

	static int dataA_1 , dataB_1 , dataA_2 , dataB_2 , dataA_3 , dataB_3 ;
	static int sel[3] = {0,0,0} ;
	static int trueCounter=0 ,falseCounter=0 ;

	dataA_1 = dataA_2   ;
	dataB_1 = dataB_2   ;
	dataA_2 = dataA_3   ;
	dataB_2 = dataB_3   ;
	dataA_3 = dut->data_i[0] ;
	dataB_3 = dut->data_i[1] ;

	sel[0] = sel[1]     ;
	sel[1] = sel[2]     ;
	sel[2] = dut->sel_i ;
	
	if(sel[0] == 0 ){
		if(dut->P_o == dataA_1 + dataB_1){
			printf("\033[0;32m%d + %d -> %d : True\033[0m\n",dataA_1,dataB_1,dut->P_o) ;
			trueCounter ++ ;
		}
		else{
			printf("\033[0;31m%d + %d -> %d : False\033[0m\n",dataA_1,dataB_1,dut->P_o);
			falseCounter ++ ;
		}
	} else if(sel[0] == 1) {
		if(dut->P_o == dataA_1 - dataB_1){
			printf("\033[0;32m%d - %d -> %d : True\033[0m\n",dataA_1,dataB_1,dut->P_o) ;
			trueCounter ++ ;
		}
		else{
			printf("\033[0;31m%d - %d -> %d : False\033[0m\n",dataA_1,dataB_1,dut->P_o);
			falseCounter ++ ;
		};
	}
	else if(sel[0] == 2) {
		if(dut->P_o == dataA_1 * dataB_1){
			printf("\033[0;32m%d * %d -> %d : True\033[0m\n",dataA_1,dataB_1,dut->P_o) ;
			trueCounter ++ ;
		}
		else{
			printf("\033[0;31m%d * %d -> %d : False\033[0m\n",dataA_1,dataB_1,dut->P_o);
			falseCounter ++ ;
		}
	}

	if(sim_unit == MAX_SIM-1){
		printf("\n\n");
		printf("\033[0;32mTotal True : %d / %d \033[0m\n",trueCounter,trueCounter+falseCounter) ;
		printf("\033[0;31mTotal False: %d / %d \033[0m\n",falseCounter,trueCounter+falseCounter) ;
	}
}

