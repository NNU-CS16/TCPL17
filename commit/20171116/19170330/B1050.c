#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int N,i,j,n;
    int num=1;
    int a[10][10]={0};
    scanf("%d",&N);
    for (n=0;n<=N/2;n++)
    {
        for (j=n;j<=N-n-1;j++)
            a[n][j]=num++;
        for (i=n+1;i<N-n-1;i++);
            a[i][N-n-1]=num++;
        for (j=N-n-1;j>n;j--)
            a[N-n-1][j]=num++;
        for (i=N-n-1;i>n;i--)
            a[i][n]=num++;
    }
    for (i=0;i<N;i++)
    {
        for (j=0;j<N;j++)
        printf("%2d ",a[i][j]);
        printf("\n");
    }
    return 0;
}
