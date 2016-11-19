#include<stdio.h>
main()
{
	long long x=0x195B74334D2A6;
	for(;x/=3;)
	putchar("01\n"[x%3]);
}
