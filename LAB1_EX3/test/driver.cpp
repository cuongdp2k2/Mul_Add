#define MAX_SIM 2000

void set_random(Vtop *dut, vluint64_t sim_unit) {
	dut->data_i[0] = rand()%256 ;
	dut->data_i[1] = rand()%256 ;
	dut->EA_i = 1 ;
	dut->EB_i = 1 ;

	static int dataA_1 , dataB_1 , dataA_2 , dataB_2 , dataA_3 , dataB_3 ;
	
	dataA_1 = dataA_2   ;
	dataB_1 = dataB_2   ;
	dataA_2 = dataA_3   ;
	dataB_2 = dataB_3   ;
	dataA_3 = dut->data_i[0] ;
	dataB_3 = dut->data_i[1] ;

	if(dut->P_o == dataA_1 * dataB_1)
		printf("\033[0;32m%d x %d -> %d : True\033[0m\n",dataA_1,dataB_1,dut->P_o);
	else
		printf("\033[0;31m%d x %d -> %d : False\033[0m\n",dataA_1,dataB_1,dut->P_o);
}



