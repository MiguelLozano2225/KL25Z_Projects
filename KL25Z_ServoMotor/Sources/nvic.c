/*
 * nvic.c
 *
 *  Created on: Jul 24, 2019
 *      Author: migue
 */

#include "derivative.h"
#include "nvic.h"

void Enable_IRQ (unsigned char IRQ)
{	
	IRQ-=16;
	NVIC_BASE_PTR->ICPR |= 1<<(IRQ & 0x1F); 
	NVIC_BASE_PTR->ISER |= 1<<(IRQ & 0x1F);	
}

void Disable_IRQ (unsigned char IRQ)
{	
	IRQ-=16;
	NVIC_BASE_PTR->ICER = 1<<(IRQ & 0x1F); 	
}

void Priority_IRQ (unsigned char IRQ, unsigned char LEVEL)
{	
	IRQ-=16;
	NVIC_BASE_PTR->IP[IRQ >> 2]|=((LEVEL&0x3)<<(8*(IRQ & 0x3)+6));
}


