#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
	int n, i, t;
	while(scanf("%d", &n) != EOF) {
		t=0;
		for(i=2; i<sqrt(n); i++) {
			if (n%i==0) {
				t=1;
				break;
			}
		}
		if(n>=2&&n<100000){
			if(n>=2&&n<=9&&t==0)
				printf("YES\n");
			else if(n>=10&&n<=99&&n/10==n%10&&t==0)
				printf("YES\n");
			else if(n>=100&&n<=999&&n/100==n%10&&t==0)
				printf("YES\n");
			else if(n>=1000&&n<=9999&&n/1000==n%10&&n%1000/100==n%100/10&&t==0)
				printf("YES\n");
		  	else if(n>=10000&&n<=99999&&n/10000==n%10&&n%10000/1000==n%100/10&&t==0)
		  		printf("YES\n");
			else printf("NO\n");
		}
		else printf("NO\n");
	}
	return 0;
}
