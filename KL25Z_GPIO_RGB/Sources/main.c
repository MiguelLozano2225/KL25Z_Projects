/*
 * main implementation: use this 'C' sample to create your own application
 *
 */

#include "derivative.h" /* include peripheral declarations */
#include "pin_n_clocks.h"

int main(void)
{
	Init_clocks();
	Init_pin();
	ptr_func=led_blue;
	
	for(;;)
	{
		ptr_func();
	}
	
	return 0;
}
