#include <stdio.h>
void main()
{
	int a,b,c,d;
	printf ("请输入一个整数a：");
	scanf ("%d",&a);
	if (a>999||a<0)
	{
		printf ("请输入0-999之间的整数！");
		exit(1);}
	else 
		{
		d=a/100;
		c=a%100/10;
		b=a%10;
			if (d!=0)
			printf ("该3位数的个位是：%d\n十位是：%d\n百位是：%d\n",b,c,d);
			else if (c!=0)
				printf ("%d,%d",b,c);
			else if (b!=0)
			printf ("该数只有个位：%1d\n",b);
		
	else 
	printf ("该数为0");
	}	
}
