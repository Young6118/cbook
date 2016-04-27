#include<stdio.h>

int main(void)
{
	int iMonth=0;				
	int iDay=0;					/*定义变量*/
	printf("enter the month you want to know the days:\n");
	scanf("%d",&iMonth);
	switch(iMonth)				/*检验变量*/
	{
	/*多路开关模式switch语句进行检测*/
		case 1:					/*1表示1月份*/
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			iDay=31;
			break;				/*跳出循环*/
		case 4:
		case 6:
		case 9:
		case 11:
			iDay=30;
			break;					/*跳出循环*/
		case 2:
			iDay=28;
			break;					//跳出循环
		default:
			iDay=-1;
			break;
	}
	if(iDay==-1)
	{
		printf ("there is a error with your enter\n");
	}
	else
	{
		printf ("2016.%d has %d days\n", iMonth, iDay);
	}
	return 0;
}

