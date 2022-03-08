#include <stdio.h>

int my_cmp(char* str1, char* str2);

void main() {
	char* str1 = { "abcdef" };
	char* str2 = { "abcde" };
	int res = my_cmp(str1, str2);
	if (res == 0)
		printf("str1 and str 2 are equal");
	if (res < 0)
		printf("str2 is bigger than str1");
	if (res > 0)
		printf("str1 is bigger than str2");
}

int my_cmp(char* str1, char* str2) {
	if (*str1 == 0 || *str2 == 0) 
	{
		if (*str1 > *str2)
			return 1;
		if (*str1 < *str2)
			return -1;
		if (*str1 == *str2)
			return 0;
	}
	if (*str1 > *str2)
		return 1;
	if (*str1 < *str2)
		return -1;
	if (*str1 == *str2) 
	{
		my_cmp(++str1, ++str2);
	}
		
}