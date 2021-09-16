/*
 * NVIC.c
 *
 *  Created on: Jun 26, 2021
 *      Author: migue
 */

#include "NVIC.h"

void NVIC_EnableIRQ(IRQInterruptIndex IRQn)
{
	IRQn -= 16U;
	NVIC_BASE_PTR->ICPR |= 1 <<(IRQn & 0x1FU); 
	NVIC_BASE_PTR->ISER |= 1 <<(IRQn & 0x1FU); 
	
}
void NVIC_ClearPendingIRQ(IRQInterruptIndex IRQn);
void NVIC_DisableIRQ(IRQInterruptIndex IRQn)
{
	IRQn -= 16U;
	NVIC_BASE_PTR->ICER |= 1 <<(IRQn & 0x1FU); 
}

void NVIC_SetPriority(IRQInterruptIndex IRQn, uint8_t Prio)
{
	IRQn -= 16U;
	NVIC_BASE_PTR->IP[IRQn/4] |= Prio<< (8U*(IRQn % 4)+4U);
}
