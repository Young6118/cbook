/*��ƽ��ֵ*/
#include <stdio.h>
void main()
{
	float a,b,c,d;
	float aver;
	printf ("����������֣�a,b,c,d��: ");
	scanf ("%f,%f,%f,%f",&a,&b,&c,&d);
	printf ("%f,%f,%f,%f",a,b,c,d);
	aver=(a+b+c+d)/4;
	printf("��4������ƽ��ֵ�ǣ�%f\n",aver);
}