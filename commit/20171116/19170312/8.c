#include<stdio.h>
int main()
{
    int a[20][20];
    int n,i,j,k=1;
    scanf("%d",&n);
    for(i=0;i<n/2;i++)
    {
        for(j=i;j<n-i-1;j++)
            a[i][j]=k++;
        for(j=i;j<n-i-1;j++)
            a[j][n-i-1]=k++;
        for(j=n-i-1;j>i;j--)
            a[n-i-1][j]=k++;
        for(j=n-i-1;j>i;j--)
            a[j][i]=k++;
    }
    if(n%2!=0)
        a[n/2][n/2]=k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%4d",a[i][j]);
        printf("\n");
    }
    return 0;
}
