#include <stdio.h>
#include <math.h>
void main()
{
	int a,b,c,s;
	double area;
	printf ("�����������ε����߳���a, b, c��: ");
	scanf ("%d,%d,%d",&a,&b,&c);
	if (a<0||b<0||c<0)
	{
		printf("��Ǹ���߳�����Ϊ������");
		exit(1);												/*�����˳�*/
	}

	if (a+b<=c||a+c<=b||b+c<=a)
	{
	printf ("��Ǹ�������ε���������֮��Ӧ�ô��ڵ�����");
	exit(1);													/*�����˳�*/
	}
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("�����ε�����ǣ�%f",area);
}
