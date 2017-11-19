#include <stdio.h>

int step(int N,int K)
{
	int n,m,a,b,f,e,p,sum;
	if (K == 1)
		return 1;
		for(n = 1,sum = 1, m = N - 1;n <= (N - 1) / K; n++, m--)
		{
			for(e = m, a = 1, p = 1; p <= n;e--, K++)
				a = a * e;
			for(f = n,b = 1; f >= 1; f--)
				b = b * f;
			sum = sum + a / b;
			m = N - 1;
		}
	if (N % 2 == 0) 
		sum = sum + 1;
	step(N, K - 1);
	return sum;
}

int main()
{
	int N,K;
	scanf("%d%d",&N ,&K);
	printf("%d\n",step(N,K) % 100007);

	return 0;
}

