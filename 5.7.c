#include <stdio.h>
void main ()
{
	int i,j,k,n;
	printf ("please:");
	scanf ("%d",&n);
	for (i=1;i<=n;i++)
	{for (k=0;k<=i-2;k++)
	{printf (" ");}
	for (j=0;j<=n-i;j++)
	{printf ("*");}printf ("\n");}                              
	
	}
