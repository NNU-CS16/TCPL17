#include <stdio.h>
int main ()
{
  float a3,a2,a1,a0,a,b,c,x;
  scanf("%f%f%f%f",&a3,&a2,&a1,&a0);
  printf("\n");
  scanf("%f%f",&a,&b);
  printf("\n");
  while(f(a)*f(b)<0&&b-a>=0.001)
  {
     c=(a+b)/2;
     if(f(c)*f(a)<0)
     b=c;
     if(f(c)*f(b)<0)
     a=c;
  }
     printf("%.2f",c);
     float result;
     result=a3*x*x*x+a2*x*x+a1*x+a0;
     return 0;
}
