#include <stdio.h>
int main()
{
    long int a [ 50000 ] , b [ 10000 ] ;
    int N, M, i, j, p, q, temp;
    printf("N<=50000\nM<=10000\n");
    scanf("%d", &N);
    for (i = 0;i < 2 * N;i++)
        scanf("%ld", &a [ i ] );
    scanf("%d", &M);
    for (i = 0;i < M;i++)
        scanf("%ld", &b [ i ] );
    for (i = 0;i < 2 * N;i = i + 2)
    {
        for (j = 0;j < M;j++)
        {
            if (a [ i ] == b [ j ] )
            {
                for (p = 0;p < M;p++)
                {
                    if (a [ i + 1 ] == b [ p ] )
                        b [ j ] = 0,b [ p ] = 0;
                }
            }
        }
    }
    for (i = 0;i < M;i++)
    {
        if (b [ i ] == 0)
            q++;
    }
    for (i = 0;i < M - 1;i++)
    {
        for (j = 0;j < M - 1 - i;j++)
        {
            if (b [ j ] > b [ j + 1 ] )
            {
                temp = b [ j ] ;
                b [ j ] = b [ j + 1 ] ;
                b [ j + 1 ] = temp;
            }
        }
    }
    for (i = q;i < M;i++)
        printf("%ld ", b [ i ] );
    printf("\n");
    return 0;
}
