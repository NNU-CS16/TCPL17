#include<stdio.h>
#include<math.h>
   
int main ()
{
   double  a,b,n,m;
   double  c;
   scanf("%lf%lf%lf",&a,&b,&c);
   n=pow(a,b);
   m=n%c;
   printf("%lf",m);
   
   return 0;
}
