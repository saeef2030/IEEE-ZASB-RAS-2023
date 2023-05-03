/*
 *      SWC       : LCD
 *      version   : 1.0
 *      Created on: May 3, 2023
 *      Author    : SEIF.M
 */

       /*Library Layer*/

#define F_CPU  8000000UL
#include <util/delay.h>
       /*MCAL Layer*/
#include"../../1-MCAL/1-DIO/DIO_interface.h"
       /*HAL Layer*/
#include"LCD_interface.h"
#include"LCD_private.h"
#include"LCD_config.h"

void LCD_voidInit(void){
	_delay_ms(35);
	/*Function send comnd */
	LCD_voidSendCmnd(0b00111000);
	_delay_us(40);
	LCD_voidSendCmnd(0b00001111);
	_delay_us(40);
	LCD_voidSendCmnd(0x01);
	_delay_ms(2);
	LCD_voidSendCmnd(0b00000110);	
}


void LCD_voidSendCmnd(u8 Copy_u8Cmnd){
	/*RS = 0*/
	DIO_u8SetPinValue(LCD_u8_CONTROL_PORT,LCD_u8_RS_PIN,DIO_u8_LOW);
	/*RW = 0*/
	DIO_u8SetPinValue(LCD_u8_CONTROL_PORT,LCD_u8_RW_PIN,DIO_u8_LOW);
	/*Write Command*/
	DIO_u8SetPortValue(LCD_u8_DATA_PORT,Copy_u8Cmnd);
	/*En = 1*/
	DIO_u8SetPinValue(LCD_u8_CONTROL_PORT,LCD_u8_EN_PIN,DIO_u8_HIGH);
	_delay_us(1);
	/*En = 0*/
	DIO_u8SetPinValue(LCD_u8_CONTROL_PORT,LCD_u8_EN_PIN,DIO_u8_LOW);	
}

void LCD_voidSendChar(u8 Copy_u8Char){
	/*RS = 1*/
	DIO_u8SetPinValue(LCD_u8_CONTROL_PORT,LCD_u8_RS_PIN,DIO_u8_HIGH);
	/*RW = 0*/
	DIO_u8SetPinValue(LCD_u8_CONTROL_PORT,LCD_u8_RW_PIN,DIO_u8_LOW);
	/*Write char*/
	DIO_u8SetPortValue(LCD_u8_DATA_PORT,Copy_u8Char);
	/*En = 1*/
	DIO_u8SetPinValue(LCD_u8_CONTROL_PORT,LCD_u8_EN_PIN,DIO_u8_HIGH);
	_delay_us(1);
	/*En = 0*/
	DIO_u8SetPinValue(LCD_u8_CONTROL_PORT,LCD_u8_EN_PIN,DIO_u8_LOW);	
}

void LCD_voidWriteString (char * Copy_pcString)		/* Send string to LCD function */
{
	u32 initial;
	for(initial=0;Copy_pcString[initial]!=0;initial++)		/* Send each char of string till the NULL */
	{
		LCD_voidSendChar (Copy_pcString[initial]);
	}
}

u8 LCD_u8GoToXY(u8 Copy_u8LineNum,u8 Copy_u8Location){
	u8 Local_u8ErrorState = STD_TYPES_OK;
	if(Copy_u8Location <= 39)
	{
		switch (Copy_u8LineNum)
		{
			case LCD_u8_LINE1: LCD_voidSendCmnd(0x80+Copy_u8Location);break;
			case LCD_u8_LINE2: LCD_voidSendCmnd(0xC0+Copy_u8Location);break;
			default : Local_u8ErrorState = STD_TYPES_NOK;

		}
	}
	else
	{
		Local_u8ErrorState = STD_TYPES_NOK;
	}
	return Local_u8ErrorState;
}

void LCD_voidClear(void){
	LCD_voidSendCmnd(0x01);		/* Clear display */
	_delay_ms(2);
	LCD_voidSendCmnd(0x80);		/* Cursor at home position */
}



