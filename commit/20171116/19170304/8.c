#include<stdio.h>

int main()
{
    int a[20][20];
    int N,i,j,k=1;
    scanf("%d",&N);

    for(i=0;i<N/2;i++)
    {
        for(j=i;j<N-i-1;j++)
            a[i][j]=k++;

        for(j=i;j<N-i-1;j++)
            a[j][N-i-1]=k++;

        for(j=N-i-1;j>i;j--)
            a[N-i-1][j]=k++;

        for(j=N-i-1;j>i;j--)
            a[j][i]=k++;
    }
    if(N%2!=0)
        a[N/2][N/2]=k;

    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
            printf("%5d",a[i][j]);
        printf("\n");
    }
    return 0;
}
