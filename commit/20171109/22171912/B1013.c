/*B1013.c_素数*/
#include <stdio.h>
#include <math.h>

int is_prime(int n)
{
    int k;
    for (k = 2; k <= sqrt(n); k++)
    {
        if (n%k == 0)
            return 0;
    }
}

int main()
{
    int n, c, k;
    int M, N;
    scanf("%d%d", &M, &N);
    for (n = 2, c = 0; c < N; n++)
    {
        if (is_prime(n))
        {
            c++;
			if (c >= M)                     //判断是否是第M到第N个素数
            {
                printf("%d", n);
                if((c - M + 1) % 10 == 0)
                    printf("\n");           //满10换行
                else
                {
                    if (c != N)
                        printf(" ");        //空格隔开，并排除末尾多余空格
                }
            }
        }
    }
    return 0;
}
