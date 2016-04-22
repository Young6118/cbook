#include <stdio.h>
void main ()
{
	int m=1,n=2,*p=&m,*q=&n,*r;
	r=p;p=q;q=r;
	printf ("%d,%d,%d,%d",m,n,*p,*q);
}