#include <stdio.h>
int Fib(int N, int k);
int main()
{
    int N, m, k;
    printf("1 <= N <= 1000\n1 <= k <= 100\n");
    scanf("%d%d", &N, &k);
    m = Fib(N, k);
    m = m % 100007;
    printf("%d\n", m);
    return 0;
}
int Fib(int N, int k)
{
    int i = N, s = 0, j = 0, g = 0;
    if (N == 1)
        return 1;
    if (N == 2)
    {
        if (k == 1)
            return 1;
        if (k >= 2)
            return 2;
    }
    if (N >= 3)
    {
        if (k == 1)
            return 1;
        if (k == 2)
            return Fib(N - 1, k) + Fib(N - 2, k);
        if (k >= 3 && k < N)
        {
            for (j = 0;j < k;j++)
            {
                s = s + Fib(i - 1, k);
                i--;
            }
            return s;
        }
        if (k >= 3 && k >= N)
            return Fib(N, N - 1) + 1;
    }
}
