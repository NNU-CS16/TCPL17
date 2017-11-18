#include <stdio.h>
#include <math.h>
int prime (int n)
{
    int i;
    for (i = 2; i <= sqrt (n); i++)
    {
        if ( n % i == 0)
            return 0;
    }
    return -1;
}
int main ()
{
    int n, j = 0;
    int M, N;
    scanf("%d%d",&M, &N);
    for (n=2; n<=1000000; n++)
    {
        if (prime (n) == 0)
        {
            j++;
            if (j >= M && j <= N)
            {
                if (j >= 10 && (j - 1) % 10 == 0)
                    printf("\n");
                    printf("%-4d", n);
            }
        }
    }
    printf("\n");
    return 0;
}
     
