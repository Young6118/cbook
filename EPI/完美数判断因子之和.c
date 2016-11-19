#include<stdio.h>
int main()
{
   long i,a, b;
	long m=0;
   printf("input the data \n");
   scanf("%ld",&a);
   for(b=1;b<=a;b++){
   	m=0;
   for(i=1;i<b;i++) {
     if(b%i==0)
      m+=i;
       }
    if(m==b)
    printf("%d\n", b);
        // printf("yes %d\n", b);
    //else
      //  printf("no\n");
     }
	return 0;
}
