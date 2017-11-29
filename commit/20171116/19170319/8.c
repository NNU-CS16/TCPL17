#include <stdio.h>
int main()
{
    int n,i,j,num = 1;
    scanf("%d",&n);
    int a[n][n];
    for (i = 0;i < n/2;i++)
    {
        for (j = i;j < n - i - 1;j++)
            a[i][j] = num++;
        for (j = i;j < n - i - 1;j++)
            a[j][n-i-1] = num++;
        for (j = n - i - 1;j > i;j--)
            a[n-i-1][j] = num++;
        for (j = n - i - 1;j > i;j--)
            a[j][i] = num++;
    }
    if (n % 2 == 1)
        a[n/2][n/2] = num;
    for (i = 0;i < n;i++)
    {
        for (j = 0;j < n;j++)
            printf("%-2d ",a[i][j]);
        printf("\n");
    }
    return 0;
}
