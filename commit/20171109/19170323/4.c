 #include <stdio.h>
 #include <math.h>

 int fib(int n, int a, int b, int k, int x)
{
	if (n == k)
		return b;
	return fib(n-1, a + b - pow(2, x), a+b, k, x+1);
}

 int main()
{
	int N, K, m;
	scanf("%d %d", &N, &K);
	if (N <= K)
		m = pow(2, N-1);
	else 
		m = fib(N, 2*pow(2, K-2)-1, pow(2, K-1), K, 0);
	printf("走法有：%d 种。\n", m);

	return 0;
} 
