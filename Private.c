/*
 * Private.c
 *
 *  Created on: Dec 28, 2021
 *      Author: Moaz Mahmoud
 */
#include"lib/STD_TYPES.h"
#include"HAL/KPAD/KPAD_interface.h"
#include "HAL/LCD/LCD_interface.h"
/******************************************************/
f32 Private_f32StringToFloat(u8 *pu8Number){
	f32 Local_f32Result=0;
	u8 Local_u8DotFlag=0;
	u8 Local_u8DivideFactor=10;
	for(u8 i=0; pu8Number[i]!='\0'; i++){
		if(pu8Number[i]=='.'){
			Local_u8DotFlag=1;
		}
		if(!Local_u8DotFlag){
			Local_f32Result*=10;
			Local_f32Result+=(pu8Number[i]-48);
		}else if (Local_u8DotFlag){
			Local_f32Result+=(f32)(pu8Number[i]-'0')/Local_u8DivideFactor;
			Local_u8DivideFactor*=10;
		}
	}
	return Local_f32Result;
}
/******************************************************/
u8 Private_u8WaitToPressKey(void){
	u8 Local_u8character=0;
	do{
		Local_u8character =KPAD_u8GetPressedKey();
	}while(Local_u8character==10);
	return Local_u8character;
}
/******************************************************/
void Private_vdFloatToString(f32 Copy_f32Value, u8 *pu8_string){
	s32 Local_s32Temp=Copy_f32Value;
	u8 i=0;
	s32 Local_s32NumLengthFactor=10;

	if(Local_s32Temp<0){
		pu8_string[0]='-';
		i+=1;
		Local_s32Temp*=-1;
	}
	while((Local_s32Temp/Local_s32NumLengthFactor)!=0){
			Local_s32NumLengthFactor*=10;
	}
	Local_s32NumLengthFactor/=10;
	while(Local_s32NumLengthFactor>=1){
		pu8_string[i]=(Local_s32Temp/Local_s32NumLengthFactor)+48;
		Local_s32Temp%=Local_s32NumLengthFactor;
		Local_s32NumLengthFactor/=10;
		i+=1;
	}
	pu8_string[i]='\0';

}











