#include <stdio.h>
void my_strcpy(char* dest, const char* src);

int main()
{
	char src[100], dest[100];
	printf("输入字符串:");
	scanf("%s", src);
	my_strcpy(dest, src);
	printf("复制的字符串为%s\n:", dest);
	return 0;
}

void my_strcpy(char* dest, const char* src)
{
	int i = 0;
	while (src[i] != '\0')
	{
	  dest[i] = src[i];
	  ++i;
	}
	dest[i] = '\0';
}
