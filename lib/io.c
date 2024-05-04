/*  COPYRIGHT (c) 2019-24 Chirayu Barde
 * ALL RIGHTS RESERVED
 * Distribution, copying, changes  of this code is strictly prohibited
 *
 * Filename : io.c
 *
 * Created: 27-03-2020
 * Last Modified: 27-03-2020 
 * Author:  Chirayu Barde
 * Co-Author:
*/

#include <avr/io.h>
#include "io.h"

void  def_led(void){
	DDRB |= (1 << LED);
}

void led_on(void){			//turn ON Led PB5
	PORTB |= (1 << LED);
}

void led_off(void){			//turn OFF led PB5
	PORTB &= ~(1 << LED);
}

void led_toggle(void){		//Toggle Led PB5
	PORTB ^= (1 << LED);
}

void def_button(void){
	DDRD &= ~(1 << PD2);
}

