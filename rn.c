#include<stdio.h>

void main(void)
{
	int a;
	int b;
	int c;

	printf("qingshurusangesshu:");
	scanf("%d%d%d",&a,&b,&c);

	if(a>b)
		a=b;
	if(a>c)
		a=c;

	printf("zuixiaozhi:%d\n",a);
}
