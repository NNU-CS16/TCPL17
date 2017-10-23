#include<stdio.h>
int main()
{
   int a,b,c;
   for(a=1,b=1,c=2;c<=10;c++)
{
   a*=c;
   b+=a;
}
   printf("%d\n",b);
   return 0;
}
