#define MAX_SIM 200000

void set_random(Vtop *dut, vluint64_t sim_unit) {
	dut->dataA_i = rand()%256 ;
	dut->dataB_i = rand()%256 ;
	dut->C_i = 0 ;
}




