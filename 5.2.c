#include <stdio.h>
void main()
{
	int i,j;
	for (i=0;i<=30;i++)
		for (j=0;j<=23;j++)
		{if (2*i+4*j==90&&i+j==30)
		printf ("鸡有%d只，兔有%d只\n",i,j);}
}