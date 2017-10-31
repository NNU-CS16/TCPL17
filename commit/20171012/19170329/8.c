#include<stdio.h>
int main()
{
   int x,n,t;
   scanf("%d",&x);
   n=x%16;
   t=x/16*10+n;
   printf("%d",t);
   return 0;
}
