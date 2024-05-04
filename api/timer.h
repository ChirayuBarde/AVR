/*  COPYRIGHT (c) 2019-24 Chirayu Barde
 * ALL RIGHTS RESERVED
 * Distribution, copying, changes  of this code is strictly prohibited
 *
 * Filename : timer.h
 *
 * Created: 27-03-2020
 * Last Modified: 27-03-2020 
 * Author:  Chirayu Barde
 * Co-Author:
*/

#ifndef __TIMER_H__
#define __TIMER_H__

void timer0_init(void);
ISR(TIMER0_OVF_vect);

void timer1_init(void);
ISR(TIMER1_OVF_vect);

void timer2_init(void);
ISR(TIMER3_OVF_vect);

#endif
