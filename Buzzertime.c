#include <REGX52.H>
#include "Delay.h"

sbit Buzzer=P2^3;

void Buzzer_Time(unsigned int ms)
{
	unsigned int i;
	for(i=0;i<ms;i++)
	{
		Buzzer=!Buzzer;
		Delay(1);
		
	}
	
	
	
}