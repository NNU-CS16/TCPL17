#include <stdio.h>
int main()
{
int x,y,z,i,j,k,n;
printf("n=");
scanf("%d",&n);
for(i=1;i<=n+1;i++)
{
for(j=1;j<=n+1-i;j++)
printf(" ");
for(k=1;k<=2*i-1;k++)
printf("*");
printf("\n");
}
for(x=n;x>0;x--)
{
for(y=n-x;y>=0;y--)
printf(" ");
for(k=2*x-2;k>=0;k--)
printf("*");
printf("\n");
}
return 0;
}
