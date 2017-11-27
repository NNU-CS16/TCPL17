#include <stdio.h>
int main()
{
    int x,n,m = 1,i,j,N;
    scanf("%d",&N);
    int a[20][20] = {0};
    for(n = 0; n <= N / 2;n++)
    {
        for(j = n; j < N - n; j++)
            a[n][j] = m++;
        for(i = n + 1; i < N - n; i++)
            a[i][N-n-1] = m++;
        for(j = N - n - 2; j >= n; j--)
            a[N-n-1][j] = m++;
        for(i = N - n - 2; i > n; i--)
            a[i][n] = m++;
    }
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
            printf("%d",a[i][j]);
            printf("\n");
     }
    return 0;
}

