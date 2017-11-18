#include <stdio.h>
int taijie(int N, int k);

int main()
{
	int N, k;
	scanf("%d%d", &N, &k);
	printf("%d\n", taijie(N, k) % 100007);

	return 0;
}

int taijie(int N, int k)
{
	int n, sum, m, a, b, j, i, p;
	if (k == 1)
	    return 1;

		for (n = 1, sum = 1, m = N - 1; n <= (N - 1) / k; n++, m--)
		{
		 	for (i = m, a = 1, p = 1; p <= n; i--, k++)
		      	a = a * i;
	     	for (j = n, b = 1; j >= 1; j--)
		      	b = b * j;
	     	sum = sum + a / b;
	     	m = N - 1;
		}
		if (N % 2 == 0) sum = sum + 1;

	taijie(N, k - 1);
	return sum;
}
