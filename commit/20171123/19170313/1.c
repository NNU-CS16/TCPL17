#include <stdio.h>
int main()
{
    long long int N, a, b, s = 0;
    int i, j;
    printf("1<=N<=1000000000\n");
    scanf("%lld", &N);
    for (i = 1;i <= N;i++)
    {
        for (j = 1;j <= i;j++)
        {
            if (i % j == 0 && j % 2 != 0)
                a = j;
        }
        s = s + a;
    }
    printf("%lld\n", s);
    return 0;
}
