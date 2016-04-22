/*求平均值*/
#include <stdio.h>
void main()
{
	float a,b,c,d;
	float aver;
	printf ("请输入个数字（a,b,c,d）: ");
	scanf ("%f,%f,%f,%f",&a,&b,&c,&d);
	printf ("%f,%f,%f,%f",a,b,c,d);
	aver=(a+b+c+d)/4;
	printf("这4个数的平均值是：%f\n",aver);
}