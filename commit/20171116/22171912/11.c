/*11.c_my strcpy*/
#include <stdio.h>

void my_strcpy(char* dest, const char* src)
{
	char *p = dest;
    while(*src != '\0')
		*dest++ = *src++;
    	puts(p);
}

int main()
{
	char dest[100000], src[100000];
	printf("请输入字符串：");
	gets(src);
	my_strcpy(dest, src);
	return 0;
}
