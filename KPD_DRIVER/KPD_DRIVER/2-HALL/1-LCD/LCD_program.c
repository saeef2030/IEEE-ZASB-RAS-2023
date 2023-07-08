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
 #if LCD_u8_MODE == LCD_u8_MODE_8_BITS
    /* 8 bit mode initialization */ 
	_delay_ms(35);
	/*Function send comnd */
	LCD_voidSendCmnd(0b00111000);
	_delay_us(40);
	/*Display On/Off Control*/
	LCD_voidSendCmnd(0b00001111);
	_delay_us(40);
	/*Display Clear*/
	LCD_voidSendCmnd(0x01);
	_delay_ms(2);
	/*Enter mode */
	LCD_voidSendCmnd(0b00000110);	
 #elif LCD_u8_MODE == LCD_u8_MODE_4_BITS
   /* 4 bit mode initialization */ 
    _delay_ms(35);
    /*Function send comnd */
    LCD_voidSendCmnd(0x20);
    LCD_voidSendCmnd(0x20);
    LCD_voidSendCmnd(0x80);
    _delay_us(40);
    /*Display On/Off Control*/
    LCD_voidSendCmnd(0x00);
    LCD_voidSendCmnd(0x50);
    _delay_us(40);
    /*Display Clear*/
    LCD_voidSendCmnd(0x00);
    LCD_voidSendCmnd(0x10);
    _delay_ms(2);
    /*Enter mode */
    LCD_voidSendCmnd(0x00);
    LCD_voidSendCmnd(0x60);
 #endif
}


void LCD_voidSendCmnd(u8 Copy_u8Cmnd){
 #if LCD_u8_MODE == LCD_u8_MODE_8_BITS
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
 #elif LCD_u8_MODE == LCD_u8_MODE_4_BITS
	/* 4 bit mode enter*/
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
	/* write the remaining Command*/
	DIO_u8SetPortValue(LCD_u8_DATA_PORT,Copy_u8Cmnd << SHIFT_4BIT);
	/*En = 1*/
	DIO_u8SetPinValue(LCD_u8_CONTROL_PORT,LCD_u8_EN_PIN,DIO_u8_HIGH);
	_delay_us(1);
	/*En = 0*/
	DIO_u8SetPinValue(LCD_u8_CONTROL_PORT,LCD_u8_EN_PIN,DIO_u8_LOW);
 #endif	
}

void LCD_voidSendChar(u8 Copy_u8Char){
 #if LCD_u8_MODE == LCD_u8_MODE_8_BITS
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
 #elif LCD_u8_MODE == LCD_u8_MODE_4_BITS
	/* 4 bit mode enter*/
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
	/*Write thr remaining char*/
	DIO_u8SetPortValue(LCD_u8_DATA_PORT,Copy_u8Char << SHIFT_4BIT);
	/*En = 1*/
	DIO_u8SetPinValue(LCD_u8_CONTROL_PORT,LCD_u8_EN_PIN,DIO_u8_HIGH);
	_delay_us(1);
	/*En = 0*/
	DIO_u8SetPinValue(LCD_u8_CONTROL_PORT,LCD_u8_EN_PIN,DIO_u8_LOW);
 #endif	
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

void LCD_voidSendNum(u32 Copy_u32Num){
	u8 Local_u8Remider , Local_u8ReverseNumber = 0;
	while(Copy_u32Num != 0)
	{
		Local_u8Remider = Copy_u32Num % 10;
		Local_u8ReverseNumber = (Local_u8ReverseNumber *10) + Local_u8Remider;
		Copy_u32Num /=10;
	}
	while(Local_u8ReverseNumber != 0)
	{
		LCD_voidSendChar((Local_u8ReverseNumber % 10) + '0');
		Local_u8ReverseNumber /= 10;
	}
}
u8 LCD_u8CreateCustomChar(u8 Copy_u8Location , u8 * Copy_pu8CharArray){
	u8 Local_u8ErrorState = STD_TYPES_OK;
    if(Copy_pu8CharArray != NULL && Copy_u8Location < MAX_CHARACTERS )
    {
        LCD_voidSendCmnd(ADDRESS_OF_CGRAM + (Copy_u8Location * MAX_CHARACTERS ));
        for (u8 Local_u8Counter = 0; Local_u8Counter < MAX_CHARACTERS ; Local_u8Counter++)
        {
            LCD_voidSendChar(Copy_pu8CharArray[Local_u8Counter]);
        }
        LCD_u8GoToXY(0,0);
    }
    else
    {
        Local_u8ErrorState = STD_TYPES_NOK;
    }
	return Local_u8ErrorState;
}


