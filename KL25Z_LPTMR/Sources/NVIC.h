/*
 * NVIC.h
 *
 *  Created on: Jun 26, 2021
 *      Author: migue
 */

#ifndef NVIC_H_
#define NVIC_H_
#include "derivative.h"


void NVIC_EnableIRQ(IRQInterruptIndex IRQn);
void NVIC_ClearPendingIRQ(IRQInterruptIndex IRQn);
void NVIC_DisableIRQ(IRQInterruptIndex IRQn);
void NVIC_SetPriority(IRQInterruptIndex IRQn, uint8_t Prio);

#endif /* NVIC_H_ */
