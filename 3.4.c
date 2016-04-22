#include <stdio.h>
#include <math.h>
void main()
{
	int a,b,c,s;
	double area;
	printf ("请输入三角形的三边长（a, b, c）: ");
	scanf ("%d,%d,%d",&a,&b,&c);
	if (a<0||b<0||c<0)
	{
		printf("抱歉，边长不能为负数！");
		exit(1);												/*出错退出*/
	}

	if (a+b<=c||a+c<=b||b+c<=a)
	{
	printf ("抱歉，三角形的任意两边之和应该大于第三边");
	exit(1);													/*出错退出*/
	}
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("三角形的面积是：%f",area);
}
