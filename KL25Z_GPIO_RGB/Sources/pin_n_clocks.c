/*
 * pin_n_clocks.c
 *
 *  Created on: Jun 14, 2021
 *      Author: migue
 */
#include "pin_n_clocks.h"

void delay(void)
{
	uint32_t a=TIME;
	while(a--);
}

void Init_clocks(void)
{/*Turn on the clocks for the PORTB and PORTD*/
	SIM_SCGC5 |= (SIM_SCGC5_PORTB_MASK  | SIM_SCGC5_PORTD_MASK );
}

void Init_pin(void)
{
	GPIOD_PDDR |= (1<<1); //Configure the PORTD 1 as and output
	GPIOB_PDDR |= (1<<18); //Configure the PORTB 18 as and output
	GPIOB_PDDR |= (1<<19); //Configure the PORTB 19 as and output
	
	
	PORTD_PCR1  |= PORT_PCR_MUX(1);
	PORTB_PCR18 |= PORT_PCR_MUX(1);
	PORTB_PCR19 |= PORT_PCR_MUX(1);
	
	GPIOD_PDOR |= (1<<1);
	GPIOB_PDOR |= (1<<18);
	GPIOB_PDOR |= (1<<19);
}

void led_blue(void)
{
	GPIOD_PDOR &= ~(1<<1);
	delay();
	GPIOD_PDOR |= (1<<1);
	ptr_func = led_red;
}

void led_red(void)
{
	GPIOB_PDOR &= ~(1<<18);
	delay();
	GPIOB_PDOR |= (1<<18);
	ptr_func = led_green;
}

void led_green(void)
{
	GPIOB_PDOR &= ~(1<<19);
	delay();
	GPIOB_PDOR |= (1<<19);
	ptr_func = led_blue;
}

