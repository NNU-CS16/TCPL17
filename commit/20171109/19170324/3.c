#include <stdio.h>

int main()
{
	int N, sum, i, j, m, a, b, n, k;
	scanf("%d", &N);

	for (n = 1, sum = 1, m = N - 1; n <= (N - 1) / 2; n++, m--)
	{
		for (i = m, a = 1, k = 1; k <= n; i--, k++ )
			a = a * i;
		for (j = n, b = 1; j >= 1; j--)
			b = b * j;
		sum = sum + a / b;
		m = N - 1;
	}

	if (N % 2 == 0) sum = sum + 1;
	printf("%d\n", sum % 100007);

	return 0;
}
