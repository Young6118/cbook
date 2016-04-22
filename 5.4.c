
#include <stdio.h>
void main()
{	int i;
	float sum=0,t=1;
	for (i=1;i<=100;i++)
	{sum+=t/i;t=-t;}
	printf ("sum=%f",sum);
}
