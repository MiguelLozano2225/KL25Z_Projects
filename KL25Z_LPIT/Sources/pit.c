#include "derivative.h" /* include peripheral declarations */
#include "nvic.h"       /* include NVIC declarations       */
#define PIT_1ms	(21090U)

void PIT_Init(uint32_t time_ms)
{
	// Disable PIT module before configuring it.
	PIT_MCR = PIT_MCR_MDIS_MASK;
	
	// Set Load value to 24M, so 1sec period will be achieved.	
	PIT_LDVAL0 = PIT_1ms * (time_ms/2);
	
	// Enable Timer
	PIT_TCTRL0 = PIT_TCTRL_TEN_MASK 
			   | PIT_TCTRL_TIE_MASK ;
	
	// Enable Module
	PIT_MCR = 0x00;
}
