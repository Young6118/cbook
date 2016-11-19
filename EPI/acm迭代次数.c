#include<stdio.h>
void p(int i)
{
	printf(" ");
	i++;
	if(i>261899)
	return;
	p(i);
}
int main()
{
	p(1);
	return 0;
}
// acm系统上限
