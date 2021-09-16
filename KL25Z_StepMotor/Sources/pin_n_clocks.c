/*
 * pin_n_clocks.c
 *
 *  Created on: Sep 21, 2019
 *      Author: migue
 */
#include "derivative.h"
#include "pin_n_clocks.h"


void Init_clocks_n_pins(void)
{
	SIM_SCGC5 |= SIM_SCGC5_PORTB_MASK | SIM_SCGC5_LPTMR_MASK | SIM_SCGC5_PORTA_MASK;
	
	PORTB_PCR0 |= PORT_PCR_MUX(1);
	PORTB_PCR1 |= PORT_PCR_MUX(1);
	PORTB_PCR2 |= PORT_PCR_MUX(1);
	PORTB_PCR3 |= PORT_PCR_MUX(1);
	
	GPIOB_PDDR |= (1<<3) | (1<<2) | (1<<1) | 1;
	
	PORTA_PCR13 |= PORT_PCR_IRQC(12) | PORT_PCR_MUX(1);
	GPIOA_PDDR &= ~(1<<13);
}

void delay(void)
{
	uint32_t a;
	a = TIME;
	while(a--);
}
