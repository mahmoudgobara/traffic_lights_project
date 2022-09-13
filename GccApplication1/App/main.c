/*
 * GccApplication1.c
 *
 * Created: 09/05/2022 02:20:00 م
 * Author : dell
 */ 
/******************************************_INCLUDES_*******************************************/
/*******************************************_MACROS_********************************************/
/*****************************************_PROTOTYPES_******************************************/
/***************************************_SELECT_MC_PINS_****************************************/
/**************************************_SELECT_BLINK_TIME_**************************************/

#include "Std.h"
#include "Dio.h"
#include "Led.h"
#include "PushButton.h"
#include "Ssd.h"
#include "Lcd.h"
#include "Buzzer.h"
#include "KeyPad.h"
#define F_CPU 16000000UL
#include <util/delay.h>

									

int main(void)
{				
	H_Buzzer_Init();							
	H_Lcd_Init();						
	H_KeyPad_Init();
	H_Led_Init(RED_LED);
	H_Led_Init(BLU_LED);
	H_Led_Init(GRN_LED);
	H_Ssd_Init();
	while (1)
	{
		/*******Traffic lights************/
		/*		Red light                 */
		H_Lcd_GoTo(0,6);
		H_Led_Off(BLU_LED);
		H_Led_On(RED_LED);
		H_Lcd_WriteString("stop");
		H_Ssd_WriteNum(20);
		H_Lcd_WriteCommand(0b00000001);
		
		H_Lcd_GoTo(0,6);
		H_Lcd_WriteString("stop");
		H_Ssd_WriteNum(19);
		H_Buzzer_Off();
		H_Led_On(RED_LED);
		H_Led_Off(BLU_LED);
		H_Lcd_WriteCommand(0b00000001);
		
		H_Ssd_WriteNum(18);
		H_Led_On(RED_LED);
		H_Led_Off(BLU_LED);
		H_Lcd_WriteCommand(0b00000001);
		
		H_Ssd_WriteNum(17);
		H_Led_On(RED_LED);
		H_Led_Off(BLU_LED);
		H_Lcd_WriteCommand(0b00000001);
		
		H_Ssd_WriteNum(16);
		H_Led_On(RED_LED);
		H_Led_Off(BLU_LED);
		H_Lcd_WriteCommand(0b00000001);
		
		H_Ssd_WriteNum(15);
		H_Led_On(RED_LED);
		H_Led_Off(BLU_LED);
		H_Lcd_WriteCommand(0b00000001);
		
		H_Ssd_WriteNum(14);
		H_Led_On(RED_LED);
		H_Led_Off(BLU_LED);
		H_Lcd_WriteCommand(0b00000001);
		
		H_Ssd_WriteNum(13);
		H_Led_On(RED_LED);
		H_Led_Off(BLU_LED);
		H_Lcd_WriteCommand(0b00000001);
		
		H_Ssd_WriteNum(12);
		H_Led_On(RED_LED);
		H_Led_Off(BLU_LED);
		H_Lcd_WriteCommand(0b00000001);
		
		H_Ssd_WriteNum(11);
		H_Led_On(RED_LED);
		H_Led_Off(BLU_LED);
		H_Lcd_WriteCommand(0b00000001);
		
		H_Ssd_WriteNum(10);
		H_Led_On(RED_LED);
		H_Led_Off(BLU_LED);
		H_Lcd_WriteCommand(0b00000001);
		
		H_Ssd_WriteNum(9);
		H_Led_On(RED_LED);
		H_Led_Off(BLU_LED);
		H_Lcd_WriteCommand(0b00000001);
		
		H_Ssd_WriteNum(8);
		H_Led_On(RED_LED);
		H_Led_Off(BLU_LED);
		H_Lcd_WriteCommand(0b00000001);
		
		H_Ssd_WriteNum(7);
		H_Led_On(RED_LED);
		H_Led_Off(BLU_LED);
		H_Lcd_WriteCommand(0b00000001);
		
		H_Ssd_WriteNum(6);
		H_Led_On(RED_LED);
		H_Led_Off(BLU_LED);
		H_Lcd_WriteCommand(0b00000001);
		
		H_Ssd_WriteNum(5);
		H_Led_On(RED_LED);
		H_Led_Off(BLU_LED);
		H_Lcd_WriteCommand(0b00000001);
		
		H_Ssd_WriteNum(4);
		H_Led_On(RED_LED);
		H_Led_Off(BLU_LED);
		H_Lcd_WriteCommand(0b00000001);
		
		H_Ssd_WriteNum(3);
		H_Led_On(RED_LED);
		H_Led_Off(BLU_LED);
		H_Lcd_WriteCommand(0b00000001);
		
		H_Ssd_WriteNum(2);
		H_Led_On(RED_LED);
		H_Led_Off(BLU_LED);
		H_Lcd_WriteCommand(0b00000001);
		
		H_Ssd_WriteNum(1);
		H_Led_On(RED_LED);
		H_Led_Off(BLU_LED);
		H_Lcd_WriteCommand(0b00000001);
		
		H_Ssd_WriteNum(0);
		H_Led_On(RED_LED);
		H_Led_Off(BLU_LED);
		H_Lcd_WriteCommand(0b00000001);
		
		/*		green light                 */
		
		
		
		H_Led_Off(RED_LED);
		H_Led_Off(BLU_LED);
		H_Led_On(GRN_LED);
		H_Lcd_GoTo(0,6);
		H_Lcd_WriteString("move");
		H_Buzzer_Once();
		H_Ssd_WriteNum(20);
		
		H_Lcd_WriteCommand(0b00000001);
		
		H_Lcd_GoTo(0,6);
		H_Lcd_WriteString("move");
		H_Ssd_WriteNum(19);
		H_Led_On(GRN_LED);
		H_Led_Off(RED_LED);
		H_Led_Off(BLU_LED);
		
		H_Ssd_WriteNum(18);
		H_Led_On(GRN_LED);
		H_Led_Off(RED_LED);
		H_Led_Off(BLU_LED);
		
		H_Ssd_WriteNum(17);
		H_Led_On(GRN_LED);
		H_Led_Off(RED_LED);
		H_Led_Off(BLU_LED);
		
		H_Ssd_WriteNum(16);
		H_Led_On(GRN_LED);
		H_Led_Off(RED_LED);
		H_Led_Off(BLU_LED);
		
		H_Ssd_WriteNum(15);
		H_Led_On(GRN_LED);
		H_Led_Off(RED_LED);
		H_Led_Off(BLU_LED);
		
		H_Ssd_WriteNum(14);
		H_Led_On(GRN_LED);
		H_Led_Off(RED_LED);
		H_Led_Off(BLU_LED);
		
		H_Ssd_WriteNum(13);
		H_Led_On(GRN_LED);
		H_Led_Off(RED_LED);
		H_Led_Off(BLU_LED);
		
		H_Ssd_WriteNum(12);
		H_Led_On(GRN_LED);
		H_Led_Off(RED_LED);
		H_Led_Off(BLU_LED);
		
		H_Ssd_WriteNum(11);
		H_Led_On(GRN_LED);
		H_Led_Off(RED_LED);
		H_Led_Off(BLU_LED);
		
		H_Ssd_WriteNum(10);
		H_Led_On(GRN_LED);
		H_Led_Off(RED_LED);
		H_Led_Off(BLU_LED);
		
		H_Ssd_WriteNum(9);
		H_Led_On(GRN_LED);
		H_Led_Off(RED_LED);
		H_Led_Off(BLU_LED);
		
		H_Ssd_WriteNum(8);
		H_Led_On(GRN_LED);
		H_Led_Off(RED_LED);
		H_Led_Off(BLU_LED);
		
		H_Ssd_WriteNum(7);
		H_Led_On(GRN_LED);
		H_Led_Off(RED_LED);
		H_Led_Off(BLU_LED);
		
		H_Ssd_WriteNum(6);
		H_Led_On(GRN_LED);
		H_Led_Off(RED_LED);
		H_Led_Off(BLU_LED);
		
		H_Ssd_WriteNum(5);
		H_Led_On(GRN_LED);
		H_Led_Off(RED_LED);
		H_Led_Off(BLU_LED);
		
		H_Ssd_WriteNum(4);
		H_Led_On(GRN_LED);
		H_Led_Off(RED_LED);
		H_Led_Off(BLU_LED);
		
		H_Ssd_WriteNum(3);
		H_Led_On(GRN_LED);
		H_Led_Off(RED_LED);
		H_Led_Off(BLU_LED);
		
		H_Ssd_WriteNum(2);
		H_Led_On(GRN_LED);
		H_Led_Off(RED_LED);
		H_Led_Off(BLU_LED);
		
		H_Ssd_WriteNum(1);
		H_Led_On(GRN_LED);
		H_Led_Off(RED_LED);
		H_Led_Off(BLU_LED);
		
		H_Ssd_WriteNum(0);
		H_Led_On(GRN_LED);
		H_Led_Off(RED_LED);
		H_Led_Off(BLU_LED);
		
		/*		blue light        */
		
		
		H_Lcd_GoTo(0,4);
		H_Lcd_WriteString("slow down");
		H_Led_On(BLU_LED);
		H_Led_Off(RED_LED);
		H_Led_Off(GRN_LED);
		H_Ssd_WriteNum(3);
		H_Buzzer_Triple();
		
		H_Lcd_WriteCommand(0b00000001);
		
		H_Lcd_GoTo(0,4);
		H_Lcd_WriteString("slow down");
		H_Ssd_WriteNum(2);
		H_Buzzer_Twice();
		H_Led_On(BLU_LED);
		H_Led_Off(RED_LED);
		H_Led_Off(GRN_LED);
		
		
		H_Lcd_WriteCommand(0b00000001);
		H_Ssd_WriteNum(1);
		H_Buzzer_Once();
		H_Led_On(BLU_LED);
		H_Led_Off(RED_LED);
		H_Led_Off(GRN_LED);
		
		
		
		H_Lcd_WriteCommand(0b00000001);
		H_Ssd_WriteNum(0);
		H_Buzzer_On();
		H_Led_On(BLU_LED);
		H_Led_Off(RED_LED);
		H_Led_Off(GRN_LED);
		
		
	}
	
}