#include <stdio.h>
int main()
{
   int i,j,n;
   int a[1000][1000];
   scanf("%d",&n);
   a[0][0]=1;
   for (i=1;i<=n;i++)
     for (j=1;j<=i;j++)
         {
            a[i][j]=a[i-1][j-1]+a[i-1][j];
            if (j<i) printf("%d ",a[i][j]);
            else printf("1\n");
         }
    return 0;
}
