/*
 * LPTMR.c
 *
 *  Created on: Jun 27, 2021
 *      Author: migue
 */
#include "LPTMR.h"

void Init_LPTMR(uint16_t time)
{
	LPTMR0_CSR &= ~LPTMR_CSR_TEN_MASK;			/*Disable LPTMR*/
	
	LPTMR0_CSR |= LPTMR_CSR_TIE_MASK;			/*Enable interrupt*/
	
	LPTMR0_PSR |= LPTMR_PSR_PCS(1U)				/*Select the LPO(1KHz) as clock source*/
			   |  LPTMR_PSR_PBYP_MASK;			/*Prescaler is bypassed*/
	
	LPTMR0_CMR = LPTMR_CMR_COMPARE(time);		/*Set the compare value*/
	
	LPTMR0_CSR |= LPTMR_CSR_TEN_MASK;			/*Enable LPTMR*/
}
