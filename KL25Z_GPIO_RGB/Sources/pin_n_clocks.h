/*
 * pin_n_clocks.h
 *
 *  Created on: Jun 14, 2021
 *      Author: migue
 */

#ifndef PIN_N_CLOCKS_H_
#define PIN_N_CLOCKS_H_

#include "derivative.h" /* include peripheral declarations */
#define TIME 1000000

void Init_clocks(void);
void Init_pin(void);
void (*ptr_func)(void);
void led_green(void);
void led_blue(void);
void led_red(void);

#endif /* PIN_N_CLOCKS_H_ */
