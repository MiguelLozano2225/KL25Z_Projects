/*
 * pin_n_clocks.h
 *
 *  Created on: Sep 21, 2019
 *      Author: migue
 */

#ifndef PIN_N_CLOCKS_H_
#define PIN_N_CLOCKS_H_

#define NIBBLE(x) GPIOB_PDOR = 0x0FU & x;   
#define TIME 10000U
void Init_clocks_n_pins(void);
void delay (void);

#endif /* PIN_N_CLOCKS_H_ */
