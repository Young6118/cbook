#include<stdio.h>

int main(void)
{
	int iMonth=0;				
	int iDay=0;					/*�������*/
	printf("enter the month you want to know the days:\n");
	scanf("%d",&iMonth);
	switch(iMonth)				/*�������*/
	{
	/*��·����ģʽswitch�����м��*/
		case 1:					/*1��ʾ1�·�*/
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			iDay=31;
			break;				/*����ѭ��*/
		case 4:
		case 6:
		case 9:
		case 11:
			iDay=30;
			break;					/*����ѭ��*/
		case 2:
			iDay=28;
			break;					//����ѭ��
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

