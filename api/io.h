/*  COPYRIGHT (c) 2019-24 Chirayu Barde
 * ALL RIGHTS RESERVED
 * Distribution, copying, changes  of this code is strictly prohibited
 *
 * Filename : io.h
 *
 * Created: 27-03-2020
 * Last Modified: 27-03-2020 
 * Author:  Chirayu Barde
 * Co-Author:
*/


#ifndef IO_H_
#define IO_H_

#define LED PB5
#define BUTTON_CLEAR bit_is_clear(PIND,2)

void  def_led(void);	//define led as PB5
void led_on(void);		//turn ON led PB5
void led_off(void);		//turn OFF led PB5
void led_toggle(void);	//Toggle led PB5

void def_button(void);


#endif /* INCFILE1_H_ */