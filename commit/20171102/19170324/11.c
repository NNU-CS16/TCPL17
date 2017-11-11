#include <stdio.h>
#include <string.h>
void reverse(char* str);

int main()
{
	char str[100];
	scanf("%s", str);
	reverse(str);

	return 0;
}

void reverse(char* str)
{
	int len;
	len = strlen(str) - 1;

	for (; len >= 0;)
	    printf("%c", str[len--]);

	printf("\n");
}
