#include <stdio.h>
#include <string.h>
void k_reverse(char *str, int k);

int main()
{
	char str[100];
	int k;
	printf("输入字符串:");
	fgets(str, 100, stdin);
	printf("输入k:");
	scanf("%d", &k);
	printf("反转后字符串为:");
	k_reverse(str, k);
	return 0;
}

void k_reverse(char *str, int k)
{
	int len = strlen(str);
	int n = len / k;
	int i, j;
	for (i = 1; i <= n; ++i)
	  for (j = k * i - 1; j >= k * (i - 1); --j)
		printf("%c", str[j]);
	if (len % k != 0)
	  for (j = k * n; j < len; ++j)
		printf("%c", str[j]);
}
