#include<stdio.h>
int main( )
{
int a[20][20];
int i,j,N,b;
printf("请输入杨辉三角形的行数:");
scanf("%d",&N);
for(i=0;i<N;i++)
{
a[i][0]=1;
a[i][i]=1;
}
for(i=2;i<N;i++)
{ for(j=1;j<=i-1;j++)
a[i][j]=a[i-1][j-1]+a[i-1][j];}
for(i=0;i<N;i++)
{
 for(j=0;j<=i;j++)
 printf("%d\t",a[i][j]);
printf("\n");}
return 0;
} 



