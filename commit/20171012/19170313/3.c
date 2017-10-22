#include<stdio.h>
int main()
{
   int sum,a,n,i;
   int c=0;
   scanf("%d%d",&a,&n);
   sum=0;
   for(i=1;i<=n;i++)
   c=a+c*10,sum=sum+c;
   printf("%d",sum);
   return 0;
}
