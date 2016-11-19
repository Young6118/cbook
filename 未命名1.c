#include<stdio.h>
int main()
{
	int i, j, num;
	num = 0;
	for (i=0; i < 10; i++) {
		for (j=0; j < 10; j++) {
			if(i ==5 && j == 5) {
				continue;
			}
			num++;
		}
	}
	printf("%d", num);
	return 0;
}v
