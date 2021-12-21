/*
 * main.c
 *
 *  Created on: Dec 18, 2021
 *      Author: Moaz Mahmoud
 */
#include"../../lib/BIT_MATH.h"
#include"../../lib/STD_TYPES.h"
#include"DIO_interface.h"

int main(){

	DIO_u8SetPinDirection(portA,pin0__,pinOutput);
	DIO_u8SetPinValue(portA,pin0__,pinHigh);
	while (1){}
}
