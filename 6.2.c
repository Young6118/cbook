#include <stdio.h>
void main()
{
	int n,*p=NULL;
	p=&n;
	scanf ("%d",&*p);
	printf ("%d",*p);
}