#include <stdio.h>				/*����ͷ�ļ�*/
void main()						/*����������*/
{
	int a;						/*�������a*/
	int b;						/*�������b*/
	int c;						/*�������c*/
	printf ("��������������a,b,c:");
	scanf ("%d,%d,%d",&a,&b,&c); /*�û�����*/
	if  (a>b)                 /*if����*/
		a=b;
	else if	(a>c)
		a=c;
	printf ("��Сֵ�ǣ�%d\n",a);
}
	