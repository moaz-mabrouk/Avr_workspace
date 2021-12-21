#include"../../lib/BIT_MATH.h"
#include"../../lib/STD_TYPES.h"
#include"DIO_interface.h"
#include"DIO_registers.h"

/*Set direction of any pin on any port*/
u8 DIO_u8SetPinDirection(enum_port Copy_enuPort, enum_pin Copy_enuPin, enum_direction Copy_enuDirection){
/*Input*/
	if(Copy_enuDirection== pinInput){
		switch(Copy_enuPort){
		case portA: CLR_BIT(DDRA,Copy_enuPin);break;
		case portB: CLR_BIT(DDRB,Copy_enuPin);break;
		case portC: CLR_BIT(DDRC,Copy_enuPin);break;
		case portD: CLR_BIT(DDRD,Copy_enuPin);break;
		}

	}
/*Output*/
	else if(Copy_enuDirection== pinOutput){
		switch(Copy_enuPort){
		case portA: SET_BIT(DDRA,Copy_enuPin);break;
		case portB: SET_BIT(DDRB,Copy_enuPin);break;
		case portC: SET_BIT(DDRC,Copy_enuPin);break;
		case portD: SET_BIT(DDRD,Copy_enuPin);break;
		}

	}
}

/*Set any pin value in any port*/
u8 DIO_u8SetPinValue(enum_port Copy_enuPort, enum_pin Copy_enuPin, enum_value Copy_enuvalue){

	if(Copy_enuvalue == pinHigh){
		switch (Copy_enuPort){
		case portA: SET_BIT(PORTA,Copy_enuPin);break;
		case portB: SET_BIT(PORTB,Copy_enuPin);break;
		case portC: SET_BIT(PORTC,Copy_enuPin);break;
		case portD: SET_BIT(PORTD,Copy_enuPin);break;
		}
	}
	else if (Copy_enuvalue==pinLow){
		switch(Copy_enuPort){
		case portA: CLR_BIT(PORTA,Copy_enuPin);break;
		case portB: CLR_BIT(PORTB,Copy_enuPin);break;
		case portC: CLR_BIT(PORTB,Copy_enuPin);break;
		case portD: CLR_BIT(PORTA,Copy_enuPin);break;
		}
	}

}

/*Read any pin value in any port*/
u8 DIO_u8GetPinValue(enum_port Copy_enuPort, enum_pin Copy_enuPin, u8 *pu8Value){

	switch (Copy_enuPort){
	case portA: *pu8Value= GET_BIT(PORTA,Copy_enuPin);break;
	case portB: *pu8Value=GET_BIT(PORTB,Copy_enuPin);break;
	case portC: *pu8Value=GET_BIT(PORTC,Copy_enuPin);break;
	case portD: *pu8Value=GET_BIT(PORTD,Copy_enuPin);break;
	}
}

/*Set any port direction*/
u8 DIO_u8SetPortDirection(enum_port Copy_enuPort, enum_direction Copy_enuDirection){
/*output*/
	if(Copy_enuDirection==portOutput){
		switch(Copy_enuPort){
		case portA: DDRA=portOutput;break;
		case portB: DDRB=portOutput;break;
		case portC: DDRC=portOutput;break;
		case portD: DDRD=portOutput;break;

		}
	}
/*input*/
	else if(Copy_enuDirection==portInput){
		switch(Copy_enuPort){
		case portA: DDRA=portInput;break;
		case portB: DDRB=portInput;break;
		case portC: DDRC=portInput;break;
		case portD: DDRD=portInput;break;
		}
	}
}

/*Set any port value*/
u8 DIO_u8SetPortValue(enum_port Copy_enuPort, enum_value Copy_enuValue){
/*high*/
	if(Copy_enuValue==portHigh){
		switch(Copy_enuPort){
		case portA: PORTA=portHigh;break;
		case portB: PORTB=portHigh;break;
		case portC: PORTC=portHigh;break;
		case portD: PORTD=portHigh;break;
		}
	}
/*input*/
	else if(Copy_enuValue==portLow){
		switch(Copy_enuPort){
		case portA: PORTA=portLow;break;
		case portB: PORTB=portLow;break;
		case portC: PORTC=portLow;break;
		case portD: PORTD=portLow;break;
		}
	}
}

/*Read any port value*/
u8 DIO_u8GetPortValue(enum_port Copy_enuPort, u8 *pu8Value){
	switch(Copy_enuPort){
	case portA: *pu8Value=PORTA;break;
	case portB: *pu8Value=PORTB;break;
	case portC: *pu8Value=PORTC;break;
	case portD: *pu8Value=PORTD;break;
	}
}




