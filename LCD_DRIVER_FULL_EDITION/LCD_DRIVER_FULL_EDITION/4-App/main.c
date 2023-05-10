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
#define F_CPU 8000000UL
#include <util/delay.h>

int main(void){

	DIO_voidInit();
	LCD_voidInit();

	u8 heart_byteCharacter[8] = {0b00000,0b00000,0b01010,0b11111,0b11111,0b01110,0b00100,0b00000};
	LCD_u8CreateCustomChar(LCD_u8_CHAR0,heart_byteCharacter);
    u8 Alien_byteCharacter[8] ={0b11111,0b10101,0b11111,0b11111,0b01110,0b01010,0b11011,0b00000};
    LCD_u8CreateCustomChar(LCD_u8_CHAR2,Alien_byteCharacter);
    u8 Check_byteCharacter[8] = {0b00000,0b00001,0b00011,0b10110,0b11100,0b01000,0b00000,0b00000};
    LCD_u8CreateCustomChar(LCD_u8_CHAR3,Check_byteCharacter);
    u8 Sound_byteCharacter[8] ={0b00001,0b00011,0b00101,0b01001,0b01001,0b01011,0b11011,0b11000};
    LCD_u8CreateCustomChar(LCD_u8_CHAR4,Sound_byteCharacter);
    u8 Skull_byteCharacter[8] = {0b00000,0b01110,0b10101,0b11011,0b01110,0b01110,0b00000,0b00000};
    LCD_u8CreateCustomChar(LCD_u8_CHAR5,Skull_byteCharacter);
    u8 Lock_byteCharacter[8] ={0b01110,0b10001,0b10001,0b11111,0b11011,0b11011,0b11111,0b00000};
    LCD_u8CreateCustomChar(LCD_u8_CHAR6,Lock_byteCharacter);
    u8 Speaker_byteCharacter[8]= {0b00001,0b00011,0b1111,0b01111,0b01111,0b00011,0b00001,0b00000};
    LCD_u8CreateCustomChar(LCD_u8_CHAR7,Speaker_byteCharacter);
    int count=0;
    u8 switch1,switch2,switch3,switch4,switch5,switch6;

	LCD_u8GoToXY(LCD_u8_LINE1,0);
	LCD_voidWriteString(" Hello I'M SEIF ");
	LCD_u8GoToXY(LCD_u8_LINE2,2);
	LCD_voidWriteString("Let's play");
	_delay_ms(400);
	LCD_voidClear();
    while(1){
    	DIO_u8GetPinValue(DIO_u8_PORTC, DIO_u8_PIN0, &switch1);
    	DIO_u8GetPinValue(DIO_u8_PORTC, DIO_u8_PIN1, &switch2);
    	DIO_u8GetPinValue(DIO_u8_PORTC, DIO_u8_PIN2, &switch3);
    	DIO_u8GetPinValue(DIO_u8_PORTC, DIO_u8_PIN3, &switch4);
    	DIO_u8GetPinValue(DIO_u8_PORTC, DIO_u8_PIN4, &switch5);
    	DIO_u8GetPinValue(DIO_u8_PORTC, DIO_u8_PIN5, &switch6);
    	_delay_ms(25);

    	if(switch1){
    		count++;
    		LCD_voidSendChar(0); }
    	else if(switch2){
    		count++;
    		LCD_voidSendChar(2); }
    	else if(switch3){
    		count++;
    		LCD_voidSendChar(3); }
    	else if(switch4){
    		count++;
    		LCD_voidSendChar(4); }
    	else if(switch5){
    		count++;
    		LCD_voidSendChar(5);
    		LCD_voidSendChar(6);}
    	else if(switch6){
    		count++;
    		LCD_voidSendChar(7);}

    	    /*check the end of the first line */
    	if(count == 17){LCD_u8GoToXY(LCD_u8_LINE2,0);}
    	/*check the end of the second line (the screen is full with characters)*/
    	else if(count == 34){LCD_voidClear();}
  }
   return 0;
}
