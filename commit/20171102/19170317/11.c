#include <stdio.h>
#include <string.h>
void reverse(char *str);

int main()
{
	char a[10];
	printf("请输入一个字符串:");
	scanf("%s", a);
	char *str;
	str = a;
	reverse(str);
	return 0;
}

void reverse(char *str)
{
	int i;
	int len = strlen(str);
	for (i = len - 1; i >= 0; --i)
	  printf("%c",str[i]);
	printf("\n");
}
