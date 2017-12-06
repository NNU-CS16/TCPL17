#include <stdio.h>

int bin_insert( int n, int m, int j, int i )
{
	return ~(~(~0 << (i - j + 1)) << j) & n | m << j;
}

int main()
{
	int n, m, j, i;
	printf("请输入n,m,j,i的值：");
	scanf("%d%d%d%d", &n, &m, &j, &i);
	printf("%d\n",bin_insert(n, m, j, i));

	return 0;
}
