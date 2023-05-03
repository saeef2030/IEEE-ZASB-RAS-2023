/*#include"../2-HALL/5-LIB/STD_TYPES.h"
#include"../2-HALL/5-LIB/BIT_MATH.h"*/

/*
 *      SWC       : LCD
 *      version   : 1.0
 *      Created on: May 3, 2023
 *      Author    : SEIF.M
 */
#include "../1-MCAL/1-DIO/DIO_interface.h"
#include "../2-HALL/1-LCD/LCD_interface.h"

/* delay function */
void delay(void)
{
	for(int x=0;x<500;x++)
		for(int y=0;y<500;y++)
			__asm("NOP");
}

int main(void){

	while(1)
	{
	DIO_voidInit();
	LCD_voidInit();

	LCD_u8GoToXY(LCD_u8_LINE1,3);
	LCD_voidWriteString("Good Morning");

	LCD_u8GoToXY(LCD_u8_LINE2,5);
	LCD_voidSendChar('S');
	LCD_voidSendChar('E');
	LCD_voidSendChar('I');
	LCD_voidSendChar('F');
	LCD_voidSendChar('.');
	LCD_voidSendChar('M');


	 delay();
	LCD_voidClear();

	LCD_u8GoToXY(LCD_u8_LINE1,5);
	LCD_voidWriteString("GoodBye");

	 delay();
	LCD_voidClear();
	}

	return 0;
}
