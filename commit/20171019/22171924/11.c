#include<stdio.h>
int main()
{
   int n;
   printf("hangshu：");
   while(scanf("%d",&n)!=EOF)
{
   int a[31][31];
   int i,j,k;

   for(i=1;i<=30;i++)
   a[i][1]=a[i][i]=1;

   if(n==1)
   printf("1\n");
   if(n>=2)
   printf("1\n1 1\n");

   for(i=3;i<=n;i++)
{
   printf("1 ");

   for(j=2;j<i;j++)
{
   a[i][j]=a[i-1][j]+a[i-1][j-1];
   printf("%d ",a[i][j]);
}
   printf("%d\n",a[i][i]);
}
   printf("\n");
}
}
