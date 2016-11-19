#include<stdio.h>
int main()
{
	int i = 0, j = 0;
	char s[52] = { 0 }, str[26] = { 0 }, str1[26] = { 0 };
	char al[26] = "AaBbCcDdEeFfGgHhIiJjKkLlMm";
	char all[26] = "NnOoPpQqRrSsTtUuVvWwXxYyZz";
	int m[26] = { 0 };
	int n[26] = { 0 };
	while (gets(s)) {
		for (i = 0; i < 52; ++i) {
			if (s[i] == '\0') {
				break;
			}
			for (j = 0; j < 26; ++j) {
				if (s[i] != al[j] && s[i] != all[j]) {
					continue;
				}
				else if (s[i] == al[j]) {
					str[j] = al[j];
					m[j]++;
				}
				else if (s[i] == all[j]) {
					str1[j] = all[j];
					n[j]++;
				}
			}
		}
		for (i = 0;i < 52;++i) {
			if (i < 26 && str[i] == '\0'&& str1[i] == '\0')
				break;
			else if (i<26 && str[i] != '\0') {
				for (j = 0;j<m[i];j++)
					putchar(str[i]);
			}
			else if (i >= 26 && str1[i - 26] != '\0') {
				for (j = 0;j<n[i - 26];j++)
					putchar(str1[i - 26]);
			}
		}
		if(i!=0)
			putchar('\n');
		for (i = 0;i < 52;++i) {
			s[i] = '\0';
			if (i>26)
				continue;
			m[i] = 0;
			n[i] = 0;
			str[i] = '\0';
			str1[i] = '\0';
		}
	}
	return 0;
}