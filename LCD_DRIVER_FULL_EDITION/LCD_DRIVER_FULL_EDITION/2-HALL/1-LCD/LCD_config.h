/*
 *      SWC       : LCD
 *      version   : 1.0
 *      Created on: May 3, 2023
 *      Author    : SEIF.M
 */
 #ifndef LCD_CONFIG_H
 #define LCD_CONFIG_H
 
 /*Choose your PORT:
 DIO_u8_PORTA , DIO_u8_PORTB  ,  DIO_u8_PORTC  ,  DIO_u8_PORTD */
 #define LCD_u8_CONTROL_PORT    DIO_u8_PORTA
 #define LCD_u8_RS_PIN          DIO_u8_PIN0
 #define LCD_u8_RW_PIN          DIO_u8_PIN1
 #define LCD_u8_EN_PIN          DIO_u8_PIN2
 
 #define LCD_u8_DATA_PORT       DIO_u8_PORTD
 
  /*Choose your MODE: 1-  LCD_u8_MODE_8_BITS
                      2-  LCD_u8_MODE_4_BITS  */
					 
#define LCD_u8_MODE    LCD_u8_MODE_8_BITS
 
 
 #endif