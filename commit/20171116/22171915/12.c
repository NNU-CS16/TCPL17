#include <stdio.h>

int my_strcmp(const char* str1, const char* str2);

int my_strcmp(const char* str1, const char* str2)
{
	int b;
	while(*str1 == *str2)
	{
		if(*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}
	b = (*(unsigned char *)str1<*(unsigned char *)str2)?-1:1;
				     return b;
}

int main()
{
	char str1[5];
	char str2[5];
	int a;
	scanf("%s%s",str1,str2);
	a = my_strcmp(str1,str2);
	if (a ==0)
		printf("相等");
	else if (a == 1)
		printf("字符串str1大");
	else
		printf("字符串str2大");
	return 0;
}

