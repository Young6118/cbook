#include<stdio.h>
int main()
{
	int num;
	while(scanf("%d", &num)) {
		if(num==6||num==28||num==496||num==8128||num==33550336||num==8589869056||num==137438691328)
			printf("YES");
		else printf("NO");
		printf("\n");
	}
	return 0;
}
