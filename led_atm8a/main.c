/*
	* GccApplication1.c
	*
	* Created: 11.09.2020 0:43:40
	* Author : Админ
	*/ 

#include <avr/io.h>
#include <util/delay.h>
#define PORTD7  7
#define PORTD6  6
#define PORTD5  5
#define PORTD4  4
#define PORTD3  3
#define PORTD2  2
#define PORTD1  1
#define PORTD0  0

int main(void)
{
	unsigned char i;
	DDRD = 0xFF;
	DDRB = 0x00;
	PORTB = 0b00000010;
	while(1)
	{
	if (!(PINB&0b00000010))
	{
	for (i=0;i<=7;i++)
	{
		PORTD=(1<<i);
		_delay_ms(500);
	}
	for (i=6;i>0;i--)
	{
		PORTD=(1<<i);
		_delay_ms(500);
	}
	}else
	{
	PORTD=0b00000000;	
	}
	
	
}
   
}

