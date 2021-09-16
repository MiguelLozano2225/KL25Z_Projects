
#include "derivative.h" /* include peripheral declarations */
#include "tpm.h"
#include "nvic.h"
#include "pin_n_clocks.h"

void delayMs(int n);

int main (void)
{
	int pulseWidth = 0;
	bool increaseDuty = true;
	
	Init_clocks();
	Init_pin();
	Init_TPM();
	
	for(;;)
	{
		if(increaseDuty)
		{
			pulseWidth += 437;
			if(pulseWidth > 43702)
				increaseDuty = false;
			
			TPM0_C1V = pulseWidth;
		}
		
		else
		{
			pulseWidth -= 437;
			if(pulseWidth < 1)
			   increaseDuty = true;
			   
				TPM0_C1V = pulseWidth;
		}
		delayMs(5);
	}

	
	


	return 0;
}

void delayMs(int n)
{
	int i;
	int j;
	for(i = 0 ; i < n; i++)
	for (j = 0; j < 7000; j++) {}
}

