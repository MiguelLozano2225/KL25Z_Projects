/*
 * pin_n_clocks.c
 *
 *  Created on: Jun 14, 2021
 *      Author: migue
 */
#include "pin_n_clocks.h"
#include "My_led_n_sw.h"


void Init_clocks(void)
{/*Turn on the clocks for the PORTB and PORTD*/
	SIM_SCGC5 |= SIM_SCGC5_LPTMR_MASK  
			|  SIM_SCGC5_PORTA_MASK
			|	SIM_SCGC5_PORTB_MASK
			|	SIM_SCGC5_PORTC_MASK
			|	SIM_SCGC5_PORTD_MASK
			|	SIM_SCGC5_PORTE_MASK;
}

