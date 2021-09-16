/*
 * main implementation: use this 'C' sample to create your own application
 *
 */
#include "derivative.h" /* include peripheral declarations */
#include "LPTMR.h"
#include "My_led_n_sw.h"
#include "NVIC.h"
#include "pin_n_clocks.h"


int main(void)
{
	Init_clocks();								/*Initialise  Clocks*/
	INIT_LEDS;									/*Initialise  pins that are connected into RGB Led*/
	
	Init_LPTMR(1000);							/*Initialise the LPTMR module with a 1seg of delay*/
	NVIC_EnableIRQ(INT_LPTimer);
	LED_BLUE_OFF;
	LED_RED_OFF;
	LED_GREEN_OFF;
	
	for(;;)
	{
	}
	
	
	return 0;
}

void LPTimer_IRQHandler(void)
{
	LPTMR0_CSR |= LPTMR_CSR_TCF_MASK;			/*Clear flag*/
		
	LED_BLUE_TOGGLE;							/*Toggle led blue*/
}
