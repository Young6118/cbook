#include<stdio.h>
int main()
{
	char a, b, c, d, e, f;
	printf("%p\t%p\t%p\t%p\t%p\t%p\n", &a, &b, &c, &d, &e, &f);
	// 局部变量在使用时才分配内存
	gets(&a);
	
	putchar(a);
	putchar(b);
	putchar(c);
	putchar(d);
	putchar(e);
	putchar(f);
	
	putchar('\n');
	return 0;
}
