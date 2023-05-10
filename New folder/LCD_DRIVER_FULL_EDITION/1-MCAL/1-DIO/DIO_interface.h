/*
 *      SWC       : DIO
 *      version   : 1.0
 *      Created on: April 28, 2023
 *      Author    : SEIF.M
 */

#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H
#include"../../5-LIB/STD_TYPES.h"

/***          Macros for Ports                 ***/
#define DIO_u8_PORTA 			0
#define DIO_u8_PORTB 			1
#define DIO_u8_PORTC 			2
#define DIO_u8_PORTD 			3
/***          Macros for Pins                  ***/
#define DIO_u8_PIN0				0
#define DIO_u8_PIN1				1
#define DIO_u8_PIN2				2
#define DIO_u8_PIN3				3
#define DIO_u8_PIN4				4
#define DIO_u8_PIN5				5
#define DIO_u8_PIN6				6
#define DIO_u8_PIN7				7
/***          Macros for Pin Direction         ***/
#define DIO_u8_INPUT 			0
#define DIO_u8_OUTPUT 			1
/***          Macros for Pin Value         ***/
#define DIO_u8_LOW       0
#define DIO_u8_HIGH      1

/***          Functions Prototypes         ***/
void DIO_voidInit           (void); // put parametrs on the registers

u8 DIO_u8setpInDirection   (u8 Copy_u8PortId, u8 Copy_u8PinId , u8 Copy_u8PinDirection); //pin direction input or output

u8 DIO_u8SetPinValue       (u8 Copy_u8PortId, u8 Copy_u8PinId , u8 Copy_u8PinValue);    //if pin is output set value(0v or 5v)

u8 DIO_u8GetPinValue       (u8 Copy_u8PortId, u8 Copy_u8PinId , u8 * Copy_pu8ReturnedPinValue) ; //if pin is input read value(0v or 5v)

u8 DIO_u8SetPortDirection  (u8 Copy_u8PortId, u8 Copy_u8PortDirection);   //port direction input or output

u8 DIO_u8SetPortValue      (u8 Copy_u8PortId, u8 Copy_u8PortValue);       //if port is output set value(0v or 5v)

u8 DIO_u8GetPortValue      (u8 Copy_u8PortId, u8 * Copy_pu8ReturnedPortValue); //if port is input read value(0v or 5v)

#endif
