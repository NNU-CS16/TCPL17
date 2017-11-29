#include <stdio.h>
#include <string.h>
void my_strcpy(char* dest, const char* src);
int main()
{
	char dest[1000], src[1000];
	scanf("%s", src);
	my_strcpy(dest, src);
	printf("%s\n", dest);
	return 0;
}
void my_strcpy(char* dest, const char* src)
{
	int len = strlen(src), i;
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[len] = '\0';
}
