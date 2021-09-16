/*
 * pin_n_clocks.c
 *
 *  Created on: Jan 6, 2020
 *      Author: migue
 */
#include "pin_n_clocks.h"
#include "derivative.h"

void Init_clocks(void)
{
	SIM_SCGC5 |= SIM_SCGC5_PORTE_MASK | SIM_SCGC5_PORTD_MASK;
	SIM_SCGC6 |= SIM_SCGC6_TPM0_MASK;
	
	SIM_SOPT2 |= SIM_SOPT2_TPMSRC(1);
}

void Init_pin(void)
{
	/*PTE as TPM0_CH2*/
	PORTE_PCR29 |= PORT_PCR_MUX(3);
}
