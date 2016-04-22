#include <stdio.h>
void main()
{
	int i;
	float sum=1,mul=1;
	for (i=1;mul<1e7;i++)
	{mul*=i;sum+=1/mul;}
		printf ("eµÄÖµÊÇ%f",sum);
}