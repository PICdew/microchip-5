#include<p18f2480.h>                                //      [[[[Include the PIC18F550 Headers]]]]]]

/* COMPILER DIRECTIVES FOR CHIP CONFIGURATION BITS*/

//#pragma config PLLDIV = 5 , CPUDIV = OSC1_PLL2 , USBDIV = 2 , FOSC = INTOSCIO_EC	// You can write this way

// OR 
/*
#pragma config FCMEN = OFF		  // OR this way 
#pragma config IESO = OFF 
#pragma config PWRT = OFF
#pragma config BOR = OFF                                     
#pragma config BORV = 3
#pragma config VREGEN = OFF
#pragma config WDT = OFF
#pragma config CP0 = OFF, CP1 = OFF, CP2 = OFF, CP3 = OFF
#pragma config CPB = OFF
#pragma config CPD = OFF
#pragma config WRT0 = OFF, WRT1 = OFF, WRT2 = OFF, WRT3 = OFF
*/

//#include <delays.h>

//#pragma config FOSC = INTOSCIO_EC
//#pragma config WDT = OFF

void main(void) 
{
	TRISC = 0 ; // PORT B Setting: Set all the pins in port B to Output. 
	LATC = 0xFF;

	while(1)    
	{
                	
		LATC = ~LATC;   // RB-0 to High   

		Delay10KTCYx(50);
	}
}
/* THE END */