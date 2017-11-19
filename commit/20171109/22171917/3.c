#include<stdio.h>
int Fib(int n);

int main()
{
   int n,m;
   n>=1&&n<=1000;
   m=(Fib(n))%100007;
   printf("%d",m);
   return 0;
}

int Fib(int n)
{
   if(n==1)
    return 1;
   else if(n==2)
    return 2;
   return Fib(n-1)+Fib(n-2);
}

