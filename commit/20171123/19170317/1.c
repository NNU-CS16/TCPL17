#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	int k, i, a, sum = 0;
	for (k = 1; k <= N; ++k)
	{
	  for (i = 1; i <= k; ++i)
	  {
		if (k % i == 0 && i % 2 != 0)
		  a = i;
	  }
	  sum = sum + a;
	}
	printf ("%d\n", sum);

	return 0;
}
