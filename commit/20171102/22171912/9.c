/*9.c回文数*/
#include <stdio.h>
#include <string.h>

int is_int_pal(int n)
{
	int i, b;
	scanf("%d", &n);
	b = n;
	for (i = 0; n > 0; n = n / 10)
		i= n % 10 + i * 10;
	if (b == i)
		return 0;
	else
		return -1;
}

int main()
{
	int n, i, b, result;
	printf("请输入一串字符串：\n");
	result = is_int_pal(n);
	printf("%d\n", result);
	return 0;
}
