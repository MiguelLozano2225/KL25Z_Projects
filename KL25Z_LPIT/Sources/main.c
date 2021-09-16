#include "derivative.h" /* include peripheral declarations */
#include "nvic.h"       /* include NVIC declarations       */
#include "pit.h"        /* include PIT declarations        */

// RGB definitions
#define LEDRGB_RED   (18U) //"PTB18"
#define LEDRGB_GREEN (19U) //"PTB19"
#define LEDRGB_BLUE  (01U) //"PTD1"

int main(void)
{
	// Turn on clocks for PORTB and PORTC from the SIM module.
	SIM_SCGC5 |= SIM_SCGC5_PORTB_MASK | SIM_SCGC5_PORTD_MASK;

	// Set required pins as GPIO (Alternative #1).
	PORTB_PCR18 |= PORT_PCR_MUX(1);
	PORTB_PCR19 |= PORT_PCR_MUX(1);
	PORTD_PCR1  |= PORT_PCR_MUX(1);

	// Set pins direction.
	GPIOB_PDDR |= (1 << LEDRGB_RED) | (1 << LEDRGB_GREEN);
	GPIOD_PDDR |= (1 << LEDRGB_BLUE);
	
	// Turn-off RGB led
	GPIOB_PSOR |= (1 << LEDRGB_RED) | (1 << LEDRGB_GREEN);
	GPIOD_PSOR |= (1 << LEDRGB_BLUE);
	
	// Configure NVIC
	Enable_IRQ(INT_PIT);//38
	
	// Turn on clock for PIT registers.
	SIM_SCGC6 |= SIM_SCGC6_PIT_MASK;
	
	// Configure PIT
	PIT_Init(1000);//100ms
	
	// Enter to an endless loop
	for(;;) {
	}
	
	return 0;
}

void PIT_IRQHandler (void)
{
	// PIT timeout has occurred ?
	if(PIT_TFLG0 & PIT_TFLG_TIF_MASK)
	{
		// Clear Timer flag (W1C)
		PIT_TFLG0 |= PIT_TFLG_TIF_MASK;
		
		// Toggle LED
		GPIOD_PTOR |= 1 << LEDRGB_BLUE;
	}
}

