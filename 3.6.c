#include <stdio.h>
void main()
{
	int a,b,c,d;
	printf ("������һ������a��");
	scanf ("%d",&a);
	if (a>999||a<0)
	{
		printf ("������0-999֮���������");
		exit(1);}
	else 
		{
		d=a/100;
		c=a%100/10;
		b=a%10;
			if (d!=0)
			printf ("��3λ���ĸ�λ�ǣ�%d\nʮλ�ǣ�%d\n��λ�ǣ�%d\n",b,c,d);
			else if (c!=0)
				printf ("%d,%d",b,c);
			else if (b!=0)
			printf ("����ֻ�и�λ��%1d\n",b);
		
	else 
	printf ("����Ϊ0");
	}	
}
