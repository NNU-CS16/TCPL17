#include <stdio.h>
int fac_bit_count(int n);
int Fac(int y);
int main()
{
   int a,b;
   scanf("%d",&b);
   a=fac_bit_count(b);
   printf("%d",a);
   return 0;
}
int Fac(int y)
{
   if(y==1)
     return 1;
   else
     return y*Fac(y-1);
}
int  fac_bit_count(int n)
     {
     int i=0,x;
     x=Fac(n);
     while(x>=1)
     {
     x=x/10;
     i++;
     }
     return i;
    }
