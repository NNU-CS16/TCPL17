#include <stdio.h>
int main()
{
    int i,j,m,n,N,k;
    int num = 0;
    int temp = 0;
    scanf("%d",&N);
    int a[N];
    for (i = 0;i < N;i++)
        scanf("%d",&a[i]);
    for (i = 0;i < N - 1;i++)
        for (j = 0;j < N - 1;j++)
        {
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    for (m = 1;m * m < N || N % m != 0;m++)
        n = N / m;
    int b[m][n];
    for (k = 0;k < m;k++)
    {
        for (i = k;i < n - k;i++)
            b[k][i] = a[num++];
        for (j = k + 1;j < m - k;j++)
            b[j][i-1] = a[num++];
        for (i = n - k - 2;j >= k;i--)
            b[j - 1][i] = a[num++];
        for (j = m - k - 2;j >= k + 1;j--)
            b[j][i+1] = a[num++];
    }
    for (i = 0;i < m;i++)
    {
        for (j = 0;j < n;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
