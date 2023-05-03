/*
 *      SWC       : DIO
 *      version   : 1.0
 *      Created on: April 28, 2023
 *      Author    : SEIF.M
 */

/* Lib
#include "../5-LIB/STD_TYPES.h"
#include "../5-LIB/BIT_MATH.h"*/
/* MCAL */
#include"../1-MCAL/1-DIO/DIO_interface.h"


/* delay function */
void delay(void)
{
	for(int x=0;x<500;x++)
		for(int y=0;y<500;y++)
			__asm("NOP");
}

int main(void)
{
	/* config PC7 & PC6 & PC5 output*/
	DIO_voidInit();

	DIO_u8setpInDirection(DIO_u8_PORTC,DIO_u8_PIN7,DIO_u8_OUTPUT);
	DIO_u8SetPinValue(DIO_u8_PORTC,DIO_u8_PIN7,DIO_u8_LOW);

	DIO_u8setpInDirection(DIO_u8_PORTC,DIO_u8_PIN6,DIO_u8_OUTPUT);
	DIO_u8SetPinValue(DIO_u8_PORTC,DIO_u8_PIN6,DIO_u8_LOW);

	DIO_u8setpInDirection(DIO_u8_PORTC,DIO_u8_PIN5,DIO_u8_OUTPUT);
	DIO_u8SetPinValue(DIO_u8_PORTC,DIO_u8_PIN5,DIO_u8_LOW);


	while(1)
	{
		/* turn on led @PC7 */
		DIO_u8SetPinValue(DIO_u8_PORTC,DIO_u8_PIN7,DIO_u8_HIGH);
		delay();
		/* turn off led @PC7*/
		DIO_u8SetPinValue(DIO_u8_PORTC,DIO_u8_PIN7,DIO_u8_LOW);
		delay();
		/* turn on led @PC6 */
		DIO_u8SetPinValue(DIO_u8_PORTC,DIO_u8_PIN6,DIO_u8_HIGH);
		delay();
		/* turn off led @PC6 */
		DIO_u8SetPinValue(DIO_u8_PORTC,DIO_u8_PIN6,DIO_u8_LOW);
		delay();
		/* turn on led @PC5 */
		DIO_u8SetPinValue(DIO_u8_PORTC,DIO_u8_PIN5,DIO_u8_HIGH);
		delay();
		/* turn off led @PC5 */
		DIO_u8SetPinValue(DIO_u8_PORTC,DIO_u8_PIN5,DIO_u8_LOW);
		delay();
	}
	return 0;
	}


