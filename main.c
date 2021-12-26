/*
 * main.c
 *
 *  Created on: Dec 18, 2021
 *      Author: Moaz Mahmoud
 */
#include"lib/BIT_MATH.h"
#include"lib/STD_TYPES.h"
#include"MCAL/DIO/DIO_interface.h"
#include"HAL/LCD/LCD_interface.h"
#include"HAL/KPAD/KPAD_interface.h"
#include"HAL/KPAD/KPAD_config.h"
#include<util/delay.h>

int main(){
	/*Set port for*/
	DIO_u8SetPortDirection(portA,0xff);
	DIO_u8SetPortValue(portA,0x00);
	DIO_u8SetPortDirection(portD,0xff);
	DIO_u8SetPortValue(portD,0x00);
	LCD_vdInit();

	/*KeyPad*/
	DIO_u8SetPortDirection(portB,0x0f);
	DIO_u8SetPortValue(portB,0xff);

	u8 key=KEY_NOT_PRESSED;
	while(1){
		key=KPAD_u8GetPressedKey();
		if(key!=KEY_NOT_PRESSED){
			LCD_vdSendData(key);
		}

	}




	while (1){}
}
