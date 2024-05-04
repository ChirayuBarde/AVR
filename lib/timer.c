/*  COPYRIGHT (c) 2019-24 Chirayu Barde
 * ALL RIGHTS RESERVED
 * Distribution, copying, changes  of this code is strictly prohibited
 *
 * Filename : timer.c
 *
 * Created: 27-03-2020
 * Last Modified: 27-03-2020 
 * Author:  Chirayu Barde
 * Co-Author:
*/

#include <avr/io.h>
#include <avr/interrupt.h>
#include "timer.h"

volatile uint8_t tot0_overflow;
volatile uint8_t tot1_overflow;
volatile uint8_t tot2_overflow;



//Timer0 8-bit 
void timer0_init(){
DDRB |= (1 << PB5);
//setting proper perscaler
//TCCR0B |= (1 << CS00);			// no	    prescaler
//TCCR0B |= (1 << CS01);			// clk/8    prescaler
//TCCR0B |= (1 << CS00) | (1 << CS01);		// clk/64   prescaler
  TCCR0B |= (1 << CS02);			// clk/256  prescaler
//TCCR0B |= (1 << CS00) | (1 << CS02);		// clk/1024 prescaler

  
  TCNT0 = 0;		 //init counter

  TIMSK0 |= (1 << TOIE0); //Enable overflow interrupt
}

ISR(TIMER0_OVF_vect){

 tot0_overflow++;
	if(tot0_overflow >= 12){
			if(TCNT0 >= 53){
				PORTB ^= (1 << PB5);
				TCNT0 = 0;
				tot0_overflow = 0;
			}
		}

}

//TImer1 16-bit  
void timer1_init(){


//setting proper perscaler
  TCCR1B |= (1 << CS10);			// no	    prescaler
//TCCR1B |= (1 << CS11);			// clk/8    prescaler
//TCCR1B |= (1 << CS10) | (1 << CS11);		// clk/64   prescaler
//TCCR1B |= (1 << CS12);			// clk/256  prescaler
//TCCR1B |= (1 << CS10) | (1 << CS12);		// clk/1024 prescaler

  
  TCNT1 = 0;		 //init counter

  TIMSK1 |= (1 << TOIE1); //Enable overflow interrupt

}

// ISR(TIMER1_OVF_vect){

//  tot1_overflow++;
// }




//Timer2 8-bit
void timer2_init(){


//setting proper perscaler
  TCCR2B |= (1 << CS20);			// no	    prescaler
//TCCR2B |= (1 << CS21);			// clk/8    prescaler
//TCCR2B |= (1 << CS20) | (1 << CS21);		// clk/64   prescaler
//TCCR2B |= (1 << CS22);			// clk/256  prescaler
//TCCR2B |= (1 << CS20) | (1 << CS22);		// clk/1024 prescaler

  
  TCNT2 = 0;		 //init counter

  TIMSK2 |= (1 << TOIE2); //Enable overflow interrupt

}

// ISR(TIMER2_OVF_vect){

//  tot2_overflow++;
// }

