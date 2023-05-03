/*
 *      SWC       : LCD
 *      version   : 1.0
 *      Created on: May 3, 2023
 *      Author    : SEIF.M
 */

#ifndef LCD_INTERFACE_H
#define LCD_INTERFACE_H

#define LCD_u8_LINE1    1
#define LCD_u8_LINE2    2

void LCD_voidInit(void);
void LCD_voidSendCmnd(u8 Copy_u8Cmnd);
void LCD_voidSendChar(u8 Copy_u8Char);
void LCD_voidWriteString (char * Copy_pcString);
u8 LCD_u8GoToXY(u8 Copy_u8LineNum,u8 Copy_u8Location);
void LCD_voidClear(void);





#endif
