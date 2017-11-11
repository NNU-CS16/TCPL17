/*5.c_阶乘*/
#include <stdio.h>

int fac_bit_count(int n)
{
	int i, e = 1, p = 1;
	scanf("%d",&n);
	for (i = 2; i <= n; i++)
	{
		p = p * i;
		while (p >= 10)
		{
			p = p / 10;
			e++;
		}   //考虑n！过大，防止溢出
	}
	return e;
}

int main()
{
	int n, i, e, p;
	printf("请输入整数n：\n");
	e = fac_bit_count(n);
	printf("%d\n", e);
	return 0;
}
