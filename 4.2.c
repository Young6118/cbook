/*4个数按小到大顺序排列*/
#include <stdio.h>
void main()
{
	int a,b,c,d,t;
	printf ("\n请输入四个数字: ");
	scanf ("%d,%d,%d,%d",&a,&b,&c,&d);
	if (a>b)
	{	t=a;
		a=b;
		b=t;
	}
	if (a>c)
	{	t=a;
		a=c;
		c=t;
	}
	if (a>d)
	{	t=a;
		a=d;
		d=t;
	}
	if (b>c)
	{	t=b;
		b=c;
		c=t;
	}
	if (b>d)
	{	t=b;
		b=d;
		d=t;
	}
	if (c>d)
	{	t=c;
		c=d;
		d=t;
	}
	printf ("该四个数从小到大的顺序为：%d<%d<%d<%d",a,b,c,d);

}