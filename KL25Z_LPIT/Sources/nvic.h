/*
 * nvic.h
 *
 *  Created on: Jul 24, 2019
 *      Author: migue
 */

#ifndef NVIC_H_
#define NVIC_H_

void Enable_IRQ (unsigned char IRQ);
void Disable_IRQ (unsigned char IRQ);
void Priority_IRQ (unsigned char IRQ, unsigned char LEVEL);

#endif /* NVIC_H_ */
