/*
 * tpm.c
 *
 *  Created on: Sep 19, 2019
 *      Author: migue
 */
#include "tpm.h"
#include "derivative.h"

void Init_TPM(void)
{
	TPM0_SC = 0; /*Disable Timer*/
	
	TPM0_C1SC |= TPM_CnSC_ELSB_MASK 
			  |  TPM_CnSC_MSB_MASK;//Center aligned and High true pulse
	
	TPM0_MOD = 43702;
	TPM0_C1V = 14568;
	TPM0_SC |= TPM_SC_CMOD(1) | TPM_SC_PS(8);
	
	
}
