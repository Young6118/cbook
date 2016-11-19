#include<stdio.h>
int main()
{
	int num, i, a[10] = {0}, t;
	while(scanf("%d", &num)) {
		t = 0;
		if(num>0) {
			for(i=0;i<10;i++) {
				a[i] = num%2;
				num/=2;
				if(a[i]==1)
					++t;
			}
			if(t == 1)
				printf("YES\n");
			else printf("NO\n");
		}
  		else printf("NO\n");
	}
	return 0;
}
