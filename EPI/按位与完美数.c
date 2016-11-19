#include <stdio.h>
#include <stdint.h>
int is_perfect_number(int32_t number) {
    return number&&(number & (number - 1));
}

int main()
{
	int32_t num;
	
	while(scanf("%d", &num)) {
		if(is_perfect_number(num))
			printf("YES");
		else printf("NO");
		printf("\n");
	}
	return 0;
}
