/*
 *      SWC       : LCD
 *      version   : 1.0
 *      Created on: May 3, 2023
 *      Author    : SEIF.M
 */

#ifndef LCD_INTERFACE_H
#define LCD_INTERFACE_H

#define LCD_u8_LINE1      1
#define LCD_u8_LINE2      2
#define ADDRESS_OF_LINE1               0x80
#define ADDRESS_OF_LINE2               0xc0

#define LCD_u8_CHAR0                  0
#define LCD_u8_CHAR1                  1
#define LCD_u8_CHAR2                  2
#define LCD_u8_CHAR3                  3
#define LCD_u8_CHAR4                  4
#define LCD_u8_CHAR5                  5
#define LCD_u8_CHAR6                  6
#define LCD_u8_CHAR7                  7

void LCD_voidInit(void);
void LCD_voidSendCmnd(u8 Copy_u8Cmnd);
void LCD_voidSendChar(u8 Copy_u8Char);
void LCD_voidWriteString (char * Copy_pcString);
u8 LCD_u8GoToXY(u8 Copy_u8LineNum,u8 Copy_u8Location); //ES_t LCD_enu_SetCursor(u8 Copy_u8_LineNum,u8 Copy_u8_Location);
void LCD_voidClear(void);
void LCD_voidSendNum(u32 Copy_u32Num);
u8 LCD_u8CreateCustomChar(u8 Copy_u8Location,u8 * Copy_pu8CharArray);






#endif
