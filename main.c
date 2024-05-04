/*  COPYRIGHT (c) 2019-24 Chirayu Barde
 * ALL RIGHTS RESERVED
 * Distribution, copying, changes  of this code is strictly prohibited
 *
 * Filename : main.c
 *
 * Created: 27-03-2020
 * Last Modified: 27-03-2020 
 * Author:  Chirayu Barde
 * Co-Author:
*/

#define F_CPU 16000000

#include <avr/io.h>
#include <util/delay.h>
#include "uart.h"
#include "io.h"
#include "timer.h"




int main(){
	int a;
	//def_led();
	//def_button();
	UART_init();
	//UART_putstring("HI Chirayu here");
	_delay_ms(1000);
	 char timer_buff[4];
    itoa(a, timer_buff,10);
	UART_putstring(timer_buff);
	UART_putstring("\r\n");
	
	//UART_putstring(a);

	while(1){		
	_delay_ms(100);

	}
}

