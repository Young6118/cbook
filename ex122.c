#include <stdio.h>				/*包含头文件*/
void main()						/*声明主函数*/
{
	int a;						/*定义变量a*/
	int b;						/*定义变量b*/
	int c;						/*定义变量c*/
	printf ("请输入三个数字a,b,c:");
	scanf ("%d,%d,%d",&a,&b,&c); /*用户输入*/
	if  (a>b)                 /*if条件*/
		a=b;
	else if	(a>c)
		a=c;
	printf ("最小值是：%d\n",a);
}
	