#include <stdio.h>
int main()
{
int i,j,n;int a[17][17]={0};
for(i=0;i<17;i++)
a[i][0]=1;
for(i=1;i<17;i++)
for(j=1;j<=i;j++)
a[i][j]=a[i-1][j]+a[i-1][j-1];
for(i=0;i<17;i++)
{for (j=0;j<=i;j++)
printf("%d",a[i][j]);
printf("\n");}
return 0;
}


