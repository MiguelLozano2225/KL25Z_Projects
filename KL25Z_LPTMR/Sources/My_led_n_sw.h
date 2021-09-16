/*
 * My_led_n_sw.h
 *
 *  Created on: Jun 25, 2021
 *      Author: migue
 */

#ifndef MY_LED_N_SW_H_
#define MY_LED_N_SW_H_

#define INIT_LEDS			(GPIOB_PDDR |= (1<<18) | (1<<19));\
							(GPIOD_PDDR |= (1<<1));\
							(PORTD_PCR1  |= PORT_PCR_MUX(1));\
							(PORTB_PCR18 |= PORT_PCR_MUX(1));\
							(PORTB_PCR19 |= PORT_PCR_MUX(1));\


#define LED_BLUE_ON			GPIOD_PDOR &= ~(1<<1)
#define LED_BLUE_OFF		GPIOD_PDOR |=  (1<<1)
#define LED_BLUE_TOGGLE		GPIOD_PDOR ^=  (1<<1)

#define LED_RED_ON			GPIOB_PDOR &= ~(1<<18)
#define LED_RED_OFF			GPIOB_PDOR |=  (1<<18)
#define LED_RED_TOGGLE		GPIOB_PDOR ^=  (1<<18)

#define LED_GREEN_ON		GPIOB_PDOR &= ~(1<<19)
#define LED_GREEN_OFF		GPIOB_PDOR |=  (1<<19)
#define LED_GREEN_TOGGLE	GPIOB_PDOR ^=  (1<<19)

#endif /* MY_LED_N_SW_H_ */
