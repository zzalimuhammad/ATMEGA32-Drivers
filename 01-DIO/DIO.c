#include "DIO.h"
#include "std_types.h"
#include "bit_math.h"


void dio_setPinDirection(u8 portId, u8 pinId, u8 direction)
{
    if(direction==OUTPUT)
    {
       switch (portId)
       {
           case 0 : SET_BIT(DDRA,pinId);
           break;
           case 1 : SET_BIT(DDRB,pinId);
           break;
           case 2 : SET_BIT(DDRC,pinId);
           break;
           case 3 : SET_BIT(DDRD,pinId);
           break;
       }
    }

    else if (direction==INPUT)
    {
        switch(portId)
        {


           case 0 : CLEAR_BIT(DDRA,pinId);
           break;
           case 1 : CLEAR_BIT(DDRB,pinId);
           break;
           case 2 : CLEAR_BIT(DDRC,pinId);
           break;
           case 3 : CLEAR_BIT(DDRD,pinId);
           break;


        }
    }
}


void dio_writeChannel(u8 portId,u8 pinId,u8 value)
{
  if(value==OUTPUT)
    {
       switch (portId)
       {
           case 0 : SET_BIT(PORTA,pinId);
           break;
           case 1 : SET_BIT(PORTB,pinId);
           break;
           case 2 : SET_BIT(PORTC,pinId);
           break;
           case 3 : SET_BIT(PORTD,pinId);
           break;
       }
    }

    else if (value==INPUT)
    {
        switch(portId)
        {


           case 0 : CLEAR_BIT(PORTA,pinId);
           break;
           case 1 : CLEAR_BIT(PORTB,pinId);
           break;
           case 2 : CLEAR_BIT(PORTC,pinId);
           break;
           case 3 : CLEAR_BIT(PORTD,pinId);
           break;


        }
    }
}

void dio_flipChannel		(u8 portId,u8 pinId)
{
    switch (portId)
       {
           case 0 : FLIP_BIT(PORTA,pinId);
           break;
           case 1 : FLIP_BIT(PORTB,pinId);
           break;
           case 2 : FLIP_BIT(PORTC,pinId);
           break;
           case 3 : FLIP_BIT(PORTD,pinId);
           break;
	   }
}


u8 dio_readChannel(u8 portId,u8 pinId)
{
    u8 localres=0;
   switch (portId)
       {
           case 0 : localres= CHECK_BIT(PINA,pinId);
           break;
           case 1 : localres= CHECK_BIT(PINB,pinId);
           break;
           case 2 : localres= CHECK_BIT(PINC,pinId);
           break;
           case 3 : localres= CHECK_BIT(PIND,pinId);
           break;
       }
       return localres;
}

