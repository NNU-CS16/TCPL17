#include<stdio.h>
int main()
{
   int a,b,c,d;
   scanf("%d",&a);
   
   if (a>=0&&a<=153) 
 {
    b=a%16;
    c=a/16;
    d=10*c+b;

   printf("%d\n",d);
  }
   return 0;
}
   
