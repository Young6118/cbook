#include<stdio.h>
#include<string.h>
int main()
{
	char str[100] = {0};
	while(gets(str)!= NULL) {
		char *ch = str + strlen(str);
		ch--;
		while(ch != str - 1) {
			printf("%c", *ch--);
		}		
		printf("\n");
	}
	return 0;
}