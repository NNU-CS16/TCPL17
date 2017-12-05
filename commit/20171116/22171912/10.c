#include <stdio.h>

int my_strlen(const char* str)
{
	int i = 0;
	while (str[i] != '\0')
		++i;
	return i;
}

int main()
{
	char str[100000];
	int i;
	printf("请输入字符串：");
	gets(str);
	printf("%d\n", my_strlen(str));
	return 0;
}
