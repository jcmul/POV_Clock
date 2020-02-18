/*
* GccApplication1.c
*
* Created: 20/01/2020 22:52:14
* Author : jean-
*/

#include <avr/io.h>
#include "avr/iom8a.h"

enum Phase{
	phase_1,
	phase_2,
	phase_3,
	phase_4,
	phase_5,
	phase_6,
	};


int main(void)
{
	uint16_t out;
	Phase phase;
	/* Replace with your application code */
	
	/* PORT B = High side MOS -> Active High*/
	DDRB = (1<<DDB0)|(1<<DDB1)|(1<<DDB2);
	
	/* PORT D = Low side MOS -> Active High */
	DDRD = (1<<DDD3)|(1<<DDD4)|(1<<DDD5);

	/* PORT B = Low side MOS */

	while (1)
	{
		switch(phase){
			case phase_1 :
			PORTB = (0<<PB0)|(1<<PB1)|(0<<PB2);
			PORTD = (0<<PD3)|(0<<PD4)|(1<<PD5);
			phase = phase_2;
			break;
			
			case phase_2 :
			PORTB = (0<<PB0)|(0<<PB1)|(1<<PB2);
			PORTD = (0<<PD3)|(0<<PD4)|(1<<PD5);
			phase = phase_3;
			break;
			
			case phase_3 :
			PORTB = (0<<PB0)|(1<<PB1)|(1<<PB2);
			PORTD = (0<<PD3)|(1<<PD4)|(1<<PD5);
			phase = phase_4;
			break;
			
			case phase_4 :
			PORTB = (0<<PB0)|(1<<PB1)|(1<<PB2);
			PORTD = (0<<PD3)|(1<<PD4)|(1<<PD5);
			phase = phase_5;
			break;
			
			case phase_5 :
			PORTB = (0<<PB0)|(1<<PB1)|(1<<PB2);
			PORTD = (0<<PD3)|(1<<PD4)|(1<<PD5);
			phase = phase_6;
			break;
			
			case phase_6 :
			PORTB = (0<<PB0)|(1<<PB1)|(1<<PB2);
			PORTD = (0<<PD3)|(1<<PD4)|(1<<PD5);
			phase = phase_1;
			break;															
		}
	}
}

