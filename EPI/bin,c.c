#include<stdio.h>
void change(int);

int main()
{
	int num, i, a[32];
	while(1) {
		printf("请输入一个整数：");
		scanf("%d", &num);
		
		if(num>0) {
			for(i=0;i<32;i++) {
				a[i] = num%2;
				num/=2;
			}
			printf("二进制表示形式为： \n");
			for(i=31;i>=0;i--)
				printf("%d", a[i]);
		}
		else {
			num = -num-1;
			for(i=0;i<32;i++) {
				a[i] = num%2;
				num/=2;
			}
			printf("二进制表示形式为： \n");
			for(i=31;i>=0;i--)
				printf("%d", a[i]);
		}
		printf("\n");
	}
	return 0;
}
