#include<stdio.h>
int main()
{
	int num, i=0;
	int *p = &num;
	char *pp;
	//printf("%d", sizeof(num));
	while(scanf("%d", &num)) {
		pp = p;
		printf("%", *(pp));
		/*for(i=0;i<sizeof(p);i++)
		printf("%p %p\n", p,p[i]);*/
		printf("\n");
	}
	// printf("%d", sizeof(p));  // ³¤¶ÈÎª8
	return 0;
}
