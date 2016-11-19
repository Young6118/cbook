#include<stdio.h>
int f(int n) {
	if(n==1)
		return 1;
	if(n==0)
		return 0;
	if(n==-1)
	 return 0;
	else {
			n = f(n-1)+f(n-2);
		return n;
	}
}
int main()
{
	int i, n;
	FILE *fp;
	fp = fopen("E://ex/C/EPI/fbnq.txt", "w+");
	while(scanf("%d", &n)!=EOF) {
		if(n>=2&&n<=46) {
		for(i=1;i<n;i++) {
			printf("%d ", f(i));
		}
		printf("%d", f(n));
		printf("\n");
	}
	for(i=1;i<n;i++)
		fprintf(fp, "%d, ", f(i));
	fprintf(fp, "%d", f(n));
	}
	return 0;
}
