#include <stdio.h>
int Fib(int N);
int main()
{
    int N, K, m, i;
    scanf("%d %d", &N, &K);
    for(i = 1; i <= K; i++)
    {
	Fib(N);
    }
    m = Fib(N) % 100007;
    printf("m = %d\n", m);
    return 0;
}
int Fib(int N)
{
    int K;
    if (N == K || N == 1)
	return 1;
    else 
	return Fib(N - 1) + Fib(N - 2);
}
