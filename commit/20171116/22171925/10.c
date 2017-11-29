#include <stdio.h>
int my_strlen(const char* str);

int main()
{
	char str[100];
	printf("输入字符串:");
	scanf("%s", str);
	my_strlen(str);
	return 0;
}

int my_strlen(const char* str)
{
	int i = 0;
	while (str[i] != '\0')
	  ++i;
	printf("该字符串的长度为%d\n", i);
	return 0;
}
