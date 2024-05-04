/*  COPYRIGHT (c) 2019-24 Chirayu Barde
 * ALL RIGHTS RESERVED
 * Distribution, copying, changes  of this code is strictly prohibited
 *
 * Filename : uart.h
 *
 * Created: 27-03-2020
 * Last Modified: 27-03-2020 
 * Author:  Chirayu Barde
 * Co-Author:
*/

#ifndef __UART_H__
#define __UART_H__

void UART_init(void);
void UART_transmit(unsigned char data);
void UART_send(unsigned char data);
void UART_putstring(unsigned char* StringPtr);
unsigned char UART_receive(void);

#endif

