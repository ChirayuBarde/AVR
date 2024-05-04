/*  COPYRIGHT (c) 2019-24 Chirayu Barde
 * ALL RIGHTS RESERVED
 * Distribution, copying, changes  of this code is strictly prohibited
 *
 * Filename : uart.c
 *
 * Created: 27-03-2020
 * Last Modified: 27-03-2020 
 * Author:  Chirayu Barde
 * Co-Author:
*/

#define F_CPU 16000000

#include <avr/io.h>
#include "uart.h"


#define BAUD  115200
#define MYUBRR F_CPU/16/BAUD-1


void UART_init(void){
	UBRR0H |= (uint8_t) (8 >> 8);	//put UBRR value from datasheet
	UBRR0L |= (uint8_t) (8);
	UCSR0B |= (1 << RXEN0) | (1 << TXEN0);	//enable uart receiver & transmitter
	UCSR0C |= (1 << USBS0) | (1 << UCSZ01) | (1 << UCSZ00);	//8bit data & 2 stop bit
}

void UART_transmit (unsigned char data){
    while (!( UCSR0A & (1<<UDRE0)));            // wait while register is free
    UDR0 = data;                             // load data in the register
}



void UART_send(unsigned char data){

 /* Wait for empty transmit buffer */
    while ( !( UCSR0A & (1<<UDRE0)) )
    ;
    /* Put data into buffer, sends the data */
    UDR0 = data;
}


void UART_putstring(unsigned char* StringPtr){

while(*StringPtr != '\0'){
 UART_send(*StringPtr);
 StringPtr++;}
}


unsigned char UART_receive(void){

  /* Wait for data to be received */
    while ( !(UCSR0A & (1<<RXC0)) )
    ;
    /* Get and return received data from buffer */
    return UDR0;
}
