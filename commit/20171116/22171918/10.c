#include <stdio.h>
int my_strlen(const char* str);
int main()
{
	char str[1000];
	scanf("%s", str);
	printf("%d\n", my_strlen(str));
	return 0;
}
int my_strlen(const char* str)
{
	int count = 0, i;
	for (i = 0; str[i] != '\0'; i++)
	count++;
	return count;
}
