#include<stdio.h>
#include<string.h>
int main()
{
    int luo[10][10];
    int n;
    int m=1;
    printf("螺旋矩阵几圈哇：");
    scanf("%d",&n);
    int i,j;
    int count=0;

    for(i=0;i<n;i++)
       {
        for(j=0;j<n;j++)
        luo[i][j]=0;
       }

    for(i=0;i<n/2;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(luo[i][j]==0)
                luo[i][j]=m++;
        }

        for(j=i+1;j<n-i;j++)
        {
            if(luo[j][n-1-i]==0)
                luo[j][n-1-i]=m++;
        }

        for(j=n-i-1;j>i;j--)
        {
            if(luo[n-i-1][j]==0)
                luo[n-1-i][j]=m++;
        }

        for(j=n-i-1;j>i;j--)
        {
            if(luo[j][i]==0)
                luo[j][i]=m++;
        }
    }

    if(n%2==1)
    luo[n/2][n/2]=m;

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            printf("%4d",luo[i][j]);
            count++;
            if(count%n==0)
                printf("\n");
        }


    return 0;
}

