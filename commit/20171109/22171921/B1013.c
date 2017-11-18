#include <stdio.h>
#include <math.h>

int prime(int num)
{
    int i, k;
    k = sqrt(num);
    for (i = 2;i < k + 1;i++)
    {
        if(num % i == 0)
            return 0;
    }
    return 1;
}

int main(void)
{
    int i, M, N, num = 1;
    int output[10000];
    scanf("%d%d", &M, &N);
    for (i = 0;i < N; i++)
    {
       num++;
       while(!prime(num))
       {
           num++;
       }
       output[i] = num;
    }
    for (i = M;i < N;i++)
    {
        printf("%d", output[i - 1]);
        printf((i - M + 1) % 10 ? " " : "\n");
    }
    printf("%d\n", output[N - 1]);
    return 0;
}
