#include <stdio.h>                 /*包含头文件*/
void main(void)						  /*主函数声明*/
{
	int a,b,c;                        /*定义变量a,b,c*/
	printf ("请输入三个数字a,b,c:\n");   
	scanf ("%d%d%d",&a,&b,&c);
	
	if (a>b)                         /*如果a>b,将b的值赋给a*/
		a=b;
	if (a>c)                        /*如果a>c,将c的值赋给a*/
		a=c;
	printf ("a=%d",a);            /*打印出最小值*/
	//system ("PAUSE");
	//return 0;                          /*程序返回0*/
}
