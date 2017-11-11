#include <stdio.h>
#include <string.h>
void reverse (char* str);

int main()
{
	char str[50];
	printf("please input:");
	scanf("%s", str);
	reverse (str);
    printf("\n");
	return 0;
}

void reverse (char* str)
{       int i, j, l;
	l = strlen(str)-1;
	for (i = l; i >= 0; i--)
		printf("%c", str[i]);
}
