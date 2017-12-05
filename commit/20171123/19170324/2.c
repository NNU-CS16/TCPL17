#include <stdio.h>

int bin_insert(int n, int m, int j, int i)
{
	int k, a, b, r;
	for (k = 0, a = m; a != 0; ++k)
		a = a >> 1;
	r = n & ((1 << j) - 1);
	b = m | (n >> (i - k + 1));
	return r | (b << j);
}

int main()
{
	int n, m, j, i;
	scanf("%d%d%d%d", &n, &m, &j, &i);
	printf("%d\n", bin_insert(n, m, j, i));

	return 0;
}
