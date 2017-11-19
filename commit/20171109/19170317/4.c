#include <stdio.h>
int fib(int N, int K);

int main()
{
	int N, K;
	printf("N = ");
	scanf("%d", &N);
	printf("K = ");
	scanf("%d", &K);
	printf("%d\n", fib(N, K));
	return 0;
}

int fib(int N, int K)
{
	if (K == 1)
	  return 0;
	else
	{
	  if (N <= 2)
		return N;
	  if (N <= K)
		return 2 * fib(N - 1, K - 1);
	  if (N > K)
	  {
		int i, num = 0;
		for (i = 1; i <= K; ++i)
		  num = num + fib(N - i, K);
		return num;
	  }
	}
}
