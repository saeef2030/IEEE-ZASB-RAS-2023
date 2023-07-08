/*#include"../2-HALL/5-LIB/STD_TYPES.h"
#include"../2-HALL/5-LIB/BIT_MATH.h"*/

/*
 *      SWC       : KPD
 *      version   : 1.0
 *      Created on: May 12, 2023
 *      Author    : SEIF.M
 */
              /* MCAL */
#include "../1-MCAL/1-DIO/DIO_interface.h"
              /* HALL */
#include "../2-HALL/1-LCD/LCD_interface.h"
#include "../2-HALL/2-KPD/KPD_interface.h"

/* delay function */
/*void delay(void)
{
	for(int x=0;x<200;x++)
		for(int y=0;y<200;y++)
			__asm("NOP");
}*/
#define pass_count      4
#define true_pass      "6464"
#define max_try         3
#include <util/delay.h>

int main()
{
	u8 Local_u8key;
	DIO_voidInit();
	LCD_voidInit();
    LCD_voidWriteString("Enter Password :");
    _delay_ms(100);
    LCD_voidClear();
    LCD_u8GoToXY(1,0);
    char enter_pass[pass_count + 1] = {0};
    u8 Local_u8passIndex = 0;
    u8 Local_u8trycount=0;
    while (1)
    {

    	KPD_u8GetKeyState(&Local_u8key);
        // key is pressed
        if (Local_u8key != KPD_u8_KEY_NOT_PRESSED )
        {
            // Check valid number key 0 to 9
            if (Local_u8key >= '0' && Local_u8key <= '9')
            {
            	enter_pass[Local_u8passIndex] = Local_u8key;
            	LCD_voidSendChar('#');
                Local_u8passIndex++;
                if (Local_u8passIndex == pass_count)
                {
                    if (strcmp(enter_pass, true_pass) == 0)
                    {
                    	LCD_voidClear();
                    	LCD_voidWriteString("True Password");
                    	DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN4,DIO_u8_HIGH);
                        LCD_voidClear();
                        LCD_voidWriteString("DONE PASS True");
                        _delay_ms(500);
                        DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN4,DIO_u8_LOW);
                        Local_u8trycount=0;
                        Local_u8passIndex = 0;
                        memset(enter_pass, 0 , pass_count + 1);
                    }
                    else
                    {
                    	LCD_voidClear();
                        LCD_u8GoToXY(1,0);
                        LCD_voidWriteString(" Wrong Password ");
                    	Local_u8trycount++;
                    	Local_u8passIndex = 0;
                        memset(enter_pass, 0 , pass_count + 1);
                    }
                	if(Local_u8trycount >= max_try)
                	{
                		LCD_voidClear();
                    	LCD_voidWriteString("LOCKED");
                		break;
                	}
                	_delay_ms(500);
                    LCD_voidClear();
                    LCD_voidWriteString("Enter Password :");
                    _delay_ms(500);
                    LCD_voidClear();
                    LCD_u8GoToXY(1,0);
                }
            }
        }
    }

    return 0;
}

