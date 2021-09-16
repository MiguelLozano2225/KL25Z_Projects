
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

	TPM0_MOD = 26527;

	
	for(;;)
	{
		TPM0_C2V = 1325;
		delayMs(500);
		TPM0_C2V = 1988;
		delayMs(500);
		TPM0_C2V = 2650;
		delayMs(500);
		
	}
	

	return 0;
}

void delayMs(int n)
{
	uint16_t a;
	a = n/4;
	
	int i;
	int j;
	for(i = 0 ; i < a; i++)
	for (j = 0; j < 7000; j++) {}
}

