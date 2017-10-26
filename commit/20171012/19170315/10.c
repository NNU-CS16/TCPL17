#include <stdio.h>

float f(float x);
float a0, a1, a2, a3;

int main()
{
float a, b;
scanf("%f %f %f %f\n",&a0,&a1,&a2,&a3);
scanf("%f %f\n",&a,&b);

float x, l, r;
l=a;
r=b;

while(l<=r-0,001 && f(1)*f(r)<=0)
 {
  if(f(l)==0)
  {
   printf("%.2f\n",l);
   return 0;
  }
  if(f(r)==0)
  {
   printf("%.2f\n",r);
   return 0;
  }
  float x=(l+r)/2;
  if(f(l)*f(x)>0)
  {
   l=x;
  }
  else
  {
   r=x;
  }
 }
  printf("%.2f\n",x);
  return 0;
}

float f(float x)
{
float result;
result=x*(x*(a3*x+a2)+a1)+a0;
return result;
}

