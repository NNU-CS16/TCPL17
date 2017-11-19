#include <stdio.h>
int Fib(int N);
int main()
{
    int N, n;
    printf("1 <= N <= 1000\n");
    scanf("%d", &N);
    n = Fib(N);
    n = n % 100007;
    printf("%d\n", n);
    return 0;
}
int Fib(int N)
{
    if (N == 1)
        return 1;
    if (N == 2)
        return 2;
    if (N >= 3)
        return Fib(N - 1) + Fib(N - 2);
}
