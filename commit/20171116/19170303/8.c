#include<stdio.h>

int main()
{
    int a[100][100];
    int n,i,j,sum=1;
    scanf("%d",&n);
    for(i=0; i<n/2; i++)
    {
    for (j=1; j<n-i-1; j++)
        a[i][j] = sum++;
    for (j=i; j<n-i-1; j++)
        a[j][n-i-1] = sum++;
    for (j=n-i-1; j>i ;j--)
        a[n-i-1][j] = sum++;
    for (j=n-i-1;j>i;j--)
        a[j][i] = sum++;
    }
    if(n%2 != 0)
        a[n/2][n/2]=sum;
    for(i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
            printf("%6d",a[i][j]);
        printf("\n");
    }
    return 0;
}
