#include<stdio.h>
int main()
{
   int sum,n;
   sum=0;
   for(n=2;n<=100;n=n+2)
   sum=sum+n;
   printf("2+4+...+100=%d\n",sum);
   return 0;
}
