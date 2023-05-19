#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "SSD_interface.h"
#include "LED_interface.h"
#include "DIO_interface.h"
#include <util/delay.h>

/* i removed the main to make another project  */
/*{
	/* Set Port B for LEDs  */
	/*LED_u8IntialPort(DIO_u8_PORTB,DIO_u8_PIN0);
	LED_u8IntialPort(DIO_u8_PORTB,DIO_u8_PIN1);
	LED_u8IntialPort(DIO_u8_PORTB,DIO_u8_PIN2);
	LED_u8IntialPort(DIO_u8_PORTB,DIO_u8_PIN3);
	LED_u8IntialPort(DIO_u8_PORTB,DIO_u8_PIN4);
	LED_u8IntialPort(DIO_u8_PORTB,DIO_u8_PIN5);
	LED_u8IntialPort(DIO_u8_PORTB,DIO_u8_PIN6);*/
	/*LED_u8IntialPort(DIO_u8_PORTB,DIO_u8_PIN7);

	/*   Set Port D for 3 Dip switch   */

	/* 1-Set Port D for Pin to read Dip switch */
	/*DIO_u8SetPortDirection(DIO_u8_PORTD,DIO_u8_PORT_LOW);

	/*2-activate pullup resistor     */
	/*DIO_u8SetPortValue(DIO_u8_PORTD,DIO_u8_PORT_HIGH);

	 u8 Local_u8DipSitch0=1 ;
	 u8 Local_u8DipSitch1=1 ;
	 u8 Local_u8DipSitch2=1 ;
	 u8 Local_u8DipSitch3=1 ;


	while(1)
	{
		DIO_u8GetPinValue(DIO_u8_PORTD,DIO_u8_PIN0,&Local_u8DipSitch0);
		DIO_u8GetPinValue(DIO_u8_PORTD,DIO_u8_PIN1,&Local_u8DipSitch1);
		DIO_u8GetPinValue(DIO_u8_PORTD,DIO_u8_PIN2,&Local_u8DipSitch2);
		//DIO_u8GetPinValue(DIO_u8_PORTD,DIO_u8_PIN3,&Local_u8DipSitch3);




		/* Case 1 reading equal 1 flashing every 500msec */
/*	while((1==Local_u8DipSitch0)&&(1==Local_u8DipSitch1)&&(1==Local_u8DipSitch2))
		{
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN0,DIO_u8_PIN_OUTPUT);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN1,DIO_u8_PIN_OUTPUT);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN2,DIO_u8_PIN_OUTPUT);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN3,DIO_u8_PIN_OUTPUT);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN4,DIO_u8_PIN_OUTPUT);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN5,DIO_u8_PIN_OUTPUT);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN6,DIO_u8_PIN_OUTPUT);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN7,DIO_u8_PIN_OUTPUT);
			_delay_ms(500);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN0,DIO_u8_PIN_INPUT);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN1,DIO_u8_PIN_INPUT);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN2,DIO_u8_PIN_INPUT);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN3,DIO_u8_PIN_INPUT);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN4,DIO_u8_PIN_INPUT);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN5,DIO_u8_PIN_INPUT);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN6,DIO_u8_PIN_INPUT);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN7,DIO_u8_PIN_INPUT);
			_delay_ms(500);
			Local_u8DipSitch0=1 ;
			Local_u8DipSitch1=1 ;
			Local_u8DipSitch2=1 ;
			break;
		}
		/*2- shifting left */
/*		while((0==Local_u8DipSitch0)&&(1==Local_u8DipSitch1)&&(1==Local_u8DipSitch2))
		{
			DIO_u8SetPortValue(DIO_u8_PORTB,128);
			_delay_ms(250);
			DIO_u8SetPortValue(DIO_u8_PORTB,64);
			_delay_ms(250);
			DIO_u8SetPortValue(DIO_u8_PORTB,32);
			_delay_ms(250);
			DIO_u8SetPortValue(DIO_u8_PORTB,16);
			_delay_ms(250);
			DIO_u8SetPortValue(DIO_u8_PORTB,8);
			_delay_ms(250);
			DIO_u8SetPortValue(DIO_u8_PORTB,4);
			_delay_ms(250);
			DIO_u8SetPortValue(DIO_u8_PORTB,2);
			_delay_ms(250);
			DIO_u8SetPortValue(DIO_u8_PORTB,1);
			_delay_ms(250);
			Local_u8DipSitch0=1 ;
			Local_u8DipSitch1=1 ;
			Local_u8DipSitch2=1 ;
			DIO_u8SetPortValue(DIO_u8_PORTB,0);
			break;

		}
		/* 3- shifting right */
/*	while((1==Local_u8DipSitch0)&&(0==Local_u8DipSitch1)&&(1==Local_u8DipSitch2))
		{
			DIO_u8SetPortValue(DIO_u8_PORTB,1);
			_delay_ms(250);
			DIO_u8SetPortValue(DIO_u8_PORTB,2);
			_delay_ms(250);
			DIO_u8SetPortValue(DIO_u8_PORTB,4);
			_delay_ms(250);
			DIO_u8SetPortValue(DIO_u8_PORTB,8);
			_delay_ms(250);
			DIO_u8SetPortValue(DIO_u8_PORTB,16);
			_delay_ms(250);
			DIO_u8SetPortValue(DIO_u8_PORTB,32);
			_delay_ms(250);
			DIO_u8SetPortValue(DIO_u8_PORTB,64);
			_delay_ms(250);
			DIO_u8SetPortValue(DIO_u8_PORTB,128);
			_delay_ms(250);
			Local_u8DipSitch0=1 ;
			Local_u8DipSitch1=1 ;
			Local_u8DipSitch2=1 ;
			DIO_u8SetPortValue(DIO_u8_PORTB,0);
			break;
		}
		/* 4-Divering */
/*		while((1==Local_u8DipSitch1)&&(1==Local_u8DipSitch0)&&(0==Local_u8DipSitch2))
		{
			DIO_u8SetPortValue(DIO_u8_PORTB,24);
			_delay_ms(300);
			DIO_u8SetPortValue(DIO_u8_PORTB,36);
			_delay_ms(300);
			DIO_u8SetPortValue(DIO_u8_PORTB,66);
			_delay_ms(300);
			DIO_u8SetPortValue(DIO_u8_PORTB,129);
			_delay_ms(300);
			Local_u8DipSitch0=1 ;
			Local_u8DipSitch1=1 ;
			Local_u8DipSitch2=1 ;
			DIO_u8SetPortValue(DIO_u8_PORTB,0);
			break;
		}
		/*5- Convering */
/*		while((0==Local_u8DipSitch0)&&(0==Local_u8DipSitch1)&&(1==Local_u8DipSitch2))
		{
			DIO_u8SetPortValue(DIO_u8_PORTB,129);
			_delay_ms(300);
			DIO_u8SetPortValue(DIO_u8_PORTB,66);
			_delay_ms(300);
			DIO_u8SetPortValue(DIO_u8_PORTB,36);
			_delay_ms(300);
			DIO_u8SetPortValue(DIO_u8_PORTB,24);
			_delay_ms(300);
			Local_u8DipSitch0=1 ;
			Local_u8DipSitch1=1 ;
			Local_u8DipSitch2=1 ;
			DIO_u8SetPortValue(DIO_u8_PORTB,0);
			break;
		}
		/*6- Snake mode  */
/*		while((0==Local_u8DipSitch0)&&(1==Local_u8DipSitch1)&&(0==Local_u8DipSitch2))
		{
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN0,DIO_u8_PIN_OUTPUT);
			_delay_ms(300);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN1,DIO_u8_PIN_OUTPUT);
			_delay_ms(300);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN2,DIO_u8_PIN_OUTPUT);
			_delay_ms(300);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN3,DIO_u8_PIN_OUTPUT);
			_delay_ms(300);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN4,DIO_u8_PIN_OUTPUT);
			_delay_ms(300);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN5,DIO_u8_PIN_OUTPUT);
			_delay_ms(300);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN6,DIO_u8_PIN_OUTPUT);
			_delay_ms(300);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN7,DIO_u8_PIN_OUTPUT);
			_delay_ms(300);
			DIO_u8SetPortValue(DIO_u8_PORTB,0);
			Local_u8DipSitch0=1 ;
			Local_u8DipSitch1=1 ;
			Local_u8DipSitch2=1 ;
			break;

		}
		/* 7-Ping pong */
/*while((1==Local_u8DipSitch0)&&(0==Local_u8DipSitch1)&&(0==Local_u8DipSitch2))*/
	/*
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN0,DIO_u8_PIN_OUTPUT);
			_delay_ms(250);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN0,DIO_u8_PIN_INPUT);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN7,DIO_u8_PIN_OUTPUT);
			_delay_ms(250);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN7,DIO_u8_PIN_INPUT);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN1,DIO_u8_PIN_OUTPUT);
			_delay_ms(250);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN1,DIO_u8_PIN_INPUT);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN6,DIO_u8_PIN_OUTPUT);
			_delay_ms(250);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN6,DIO_u8_PIN_INPUT);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN2,DIO_u8_PIN_OUTPUT);
			_delay_ms(250);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN2,DIO_u8_PIN_INPUT);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN5,DIO_u8_PIN_OUTPUT);
			_delay_ms(250);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN5,DIO_u8_PIN_INPUT);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN3,DIO_u8_PIN_OUTPUT);
			_delay_ms(250);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN3,DIO_u8_PIN_INPUT);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN4,DIO_u8_PIN_OUTPUT);
			_delay_ms(250);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN4,DIO_u8_PIN_INPUT);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN3,DIO_u8_PIN_OUTPUT);
			_delay_ms(250);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN3,DIO_u8_PIN_INPUT);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN5,DIO_u8_PIN_OUTPUT);
			_delay_ms(250);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN5,DIO_u8_PIN_INPUT);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN2,DIO_u8_PIN_OUTPUT);
			_delay_ms(250);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN2,DIO_u8_PIN_INPUT);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN6,DIO_u8_PIN_OUTPUT);
			_delay_ms(250);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN6,DIO_u8_PIN_INPUT);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN1,DIO_u8_PIN_OUTPUT);
			_delay_ms(250);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN1,DIO_u8_PIN_INPUT);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN7,DIO_u8_PIN_OUTPUT);
			_delay_ms(250);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN7,DIO_u8_PIN_INPUT);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN0,DIO_u8_PIN_OUTPUT);
			Local_u8DipSitch0=1 ;
			Local_u8DipSitch1=1 ;
			Local_u8DipSitch2=1 ;
			DIO_u8SetPortValue(DIO_u8_PORTB,0);
			break;
		}
		while((0==Local_u8DipSitch0)&&(0==Local_u8DipSitch1)&&(0==Local_u8DipSitch2))
		{
			DIO_u8SetPortValue(DIO_u8_PORTB,129);
			_delay_ms(300);
			DIO_u8SetPortValue(DIO_u8_PORTB,24);
			_delay_ms(300);
			DIO_u8SetPortValue(DIO_u8_PORTB,66);
			_delay_ms(300);
			DIO_u8SetPortValue(DIO_u8_PORTB,36);
			_delay_ms(300);
			Local_u8DipSitch0=1 ;
			Local_u8DipSitch1=1 ;
			Local_u8DipSitch2=1 ;
			DIO_u8SetPortValue(DIO_u8_PORTB,0);
			break;
		}

}
}*/