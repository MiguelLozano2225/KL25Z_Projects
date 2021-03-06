/*
 * main implementation: use this 'C' sample to create your own application
 *
 */
#include "derivative.h" /* include peripheral declarations */
#include "pin_n_clocks.h"
#include "pit.h"
#include "nvic.h"


uint8_t Steps_u8[4U] = {0x05U, 0x06U, 0x0AU, 0x09U};

int main(void)

{	
	uint8_t size_u8=0U;
	uint8_t * ptr_pu8;
	
	//Enable_IRQ(INT_PIT);
	Init_clocks_n_pins();	
	Enable_IRQ(INT_PORTA);
	Priority_IRQ(INT_PORTA, 0);
	
	for(;;)
	{
		ptr_pu8 = Steps_u8;
		size_u8=4U;
		while(size_u8)
		{
			NIBBLE(*ptr_pu8);
			//PIT_Init(10);
			delay();
			ptr_pu8++;
			size_u8--;
		}
	}
	
	return 0;
}
/*-


void PIT_IRQHandler(void)
{
	// PIT timeout has occurred ?
	if(PIT_TFLG0 & PIT_TFLG_TIF_MASK)
	{
		// Clear Timer flag (W1C)
		PIT_TFLG0 |= PIT_TFLG_TIF_MASK;
	}
}*/

void PORTA_IRQHandler(void)
{
	uint8_t i;
	uint8_t aux;
	PORTA_PCR13 |= PORT_PCR_ISF_MASK;  

	for(i=0; i<2; i++)
	{
		aux = Steps_u8[i];
		Steps_u8[i] = Steps_u8[3-i];
		Steps_u8[3-i] = aux;
	}
}
