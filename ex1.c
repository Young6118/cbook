#include <stdio.h>                 /*����ͷ�ļ�*/
void main(void)						  /*����������*/
{
	int a,b,c;                        /*�������a,b,c*/
	printf ("��������������a,b,c:\n");   
	scanf ("%d%d%d",&a,&b,&c);
	
	if (a>b)                         /*���a>b,��b��ֵ����a*/
		a=b;
	if (a>c)                        /*���a>c,��c��ֵ����a*/
		a=c;
	printf ("a=%d",a);            /*��ӡ����Сֵ*/
	//system ("PAUSE");
	//return 0;                          /*���򷵻�0*/
}
