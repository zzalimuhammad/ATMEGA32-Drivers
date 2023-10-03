/*
|-------------------------------|
|                               |
|   Ali Muhammad                |
|                               |
|                               |
|                               |
|-------------------------------|
*/

#ifndef	DIO_INTERFACE_H
#define DIO_INTERFACE_H
#include "std_types.h"

#define OUTPUT				(1)
#define INPUT				(0)

#define PORTA_ID			(0)
#define PORTB_ID			(1)
#define PORTC_ID			(2)
#define PORTD_ID			(3)

#define PIN0_ID				(0)
#define PIN1_ID				(1)
#define PIN2_ID				(2)
#define PIN3_ID				(3)
#define PIN4_ID				(4)
#define PIN5_ID				(5)
#define PIN6_ID				(6)
#define PIN7_ID				(7)

#define HIGH				(1)
#define LOW					(0)

#define DDRA	(*(volatile u8*)0x3A)
#define PORTA	(*(volatile u8*)0x3B)
#define PINA	(*(volatile u8*)0x39)

#define DDRB	(*(volatile u8*)0x37)
#define PORTB	(*(volatile u8*)0x38)
#define PINB	(*(volatile u8*)0x36)

#define DDRC	(*(volatile u8*)0x34)
#define PORTC	(*(volatile u8*)0x35)
#define PINC	(*(volatile u8*)0x33)

#define DDRD	(*(volatile u8*)0x31)
#define PORTD	(*(volatile u8*)0x32)
#define PIND	(*(volatile u8*)0x30)

void dio_setPinDirection	(u8 portId, u8 pinId, u8 direction);
void dio_writeChannel		(u8 portId,u8 pinId,u8 value);
void dio_flipChannel		(u8 portId,u8 pinId);
u8 dio_readChannel			(u8 portId,u8 pinId);


#endif