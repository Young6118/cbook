
#include <reg52.h>
#include "led.h"
#include "common.h"


void  main()
{
	N_buzz(0);
	while(1)
	{
//		led_n(1);
//		
//		delay(1000);
//		led_n(0);
//		delay(1000);
		

		
	}
}

void delay (unsigned int n)
{
	 int i,j;
	 for (i = n; i > 0; i--)
	     for (j = 110;j > 0; j--);
}