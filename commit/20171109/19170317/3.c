#include <stdio.h>
int fib(int N, int a,int b);

int main()
{
	int N, num;
	printf("要走上第几级台阶(1 <= N <= 1000):");
	scanf("%d",&N);
	if (N == 1)
	  num = 1;
	else
	  num = fib(N, 1, 2) % 100007;
	printf("共有%d种走法\n", num);
	return 0;
}

int fib(int N, int a, int b)
{
	if (N == 2)
	  return b;
	else
	  return fib(N - 1, b, a + b);
}
	
