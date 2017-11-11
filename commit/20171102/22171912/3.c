/*3.c_2的幂次方*/
#include <stdio.h>

int is_pow2(int n)
{
	scanf("%d", &n);
	if (n>0)
	{
		if ((n & (n-1)) == 0)
			return 0;
		else
			return -1;
	}
	else
		return -1;
}

int main()
{
	int n, result;
	printf("请输入整数n：\n");
	result = is_pow2(n);
	printf("%d\n", result);
	return 0;
}
