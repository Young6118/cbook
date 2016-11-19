#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d", &n)!=EOF) {
	  	if(n && (n&(n-1))== 0)
	  		printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
