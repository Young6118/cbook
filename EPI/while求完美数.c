#include<stdio.h>
int main()
{
	int num, i;
	while(scanf("%d", &num) != EOF) {
		while(num%2==0) {
			num/=2;
		}
	  	if(num==1)
	  		printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
