#include<stdio.h>
f(i,j) {
	i<5?printf(i?"0%d\n":"0\n",j-1),f(i+1,j*100+11):0;
}
main()
{
	f(0,0);
}
