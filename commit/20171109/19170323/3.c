 #include <stdio.h>

 int fib(int n, int a, int b)
{
	if (n == 0)
		return b;
	return fib(n-1, b, a + b);
}

 int main()
{
	int N, m;  //(1<=N<=1000)
	printf("please input N: ");
	scanf("%d", &N);
	m = fib(N, 0, 1);
	m = m%100007;
	printf("走法有：%d 种\n", m);
}
