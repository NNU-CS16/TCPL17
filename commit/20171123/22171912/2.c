/*2.c_二进制插入*/
#include <stdio.h>

int bin_insert(int n, int m, int j, int i);

int main()
{
	int n, m, j, i;
	printf("请输入n m j i：");
	printf("%d\n", bin_insert(n, m, j, i));
	return 0;
}

int bin_insert(int n, int m, int j, int i)
{
	int k;
	scanf("%d%d%d%d", &n,&m,&j,&i);
	for (k = 0; k < j; ++k)
	{
		m *= 2;
	}
	return n | m;
}
