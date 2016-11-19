#include<stdio.h>
int main()
{
	int m, n, sum;
	while(scanf("%d", &m)!=EOF) {
		n = m;
		sum = 0;
		while(m!=0) {
			sum = sum*10+m%10;
			m = (m-m%10)/10;
		}
		sum = sum+m;
		if(sum==n)
			printf("yes");
	}
	return 0;
}
