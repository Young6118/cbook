//�������е�
//p00~p07  l1~l8     �͵�ƽ����
//le     y4c    �ߵ�ƽ   ����ͨ    �͵�ƽ  ����
// y4   y4c   
// 1     0
// 0      1
// a=p25    b=p26   c=p27     y4
//0           0       1       0
//0           0       0       1
#include "led.h"
void  led()
{
	unsigned char a;
	int i;
		a = 0x00; //1111 1111 ->
	  A138 = 0;
	  B138 = 0; 
	  C138 = 1;
		for (i = 0; i < 256; i++)
		{
				P0 = ~a;          
			  delay(1000);
			  a ++;
		}
		
	  A138 = 0;
	  B138 = 0;
	  C138 = 0;	
}

void led_n(uchar n)
{
		A138 = 0;
	  B138 = 0; 
	  C138 = 1;  //1000 0000 ->0111 1111
	  if ( n == 0 )
		{
			P0 = 0xff;
		}
		else
		{
			P0 = ~(0x80 >> (n-1));
		}

	  C138 = 0;			
}

void N_buzz(uchar n)
{
	 	A138 = 1;
	  B138 = 0; 
	  C138 = 1; 
	
	  buzz = n;
	
		A138 = 0;
	  B138 = 0;
	  C138 = 0;	
	  
}