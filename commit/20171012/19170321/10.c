#include<stdio.h>
float a3,a1,a2,a0;
float f(float x);

int main()
{
  float a,b;
  scanf("%f %f %f %f\n",&a0,&a1,&a2,&a3);
  scanf("%f %f\n",&a,&b);
  float x,l,r;
  l=a;
  r=b;
  while(l<=r-0.0001 && f(l)*f(r)<=0)
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
    float x=(1+r)/2;
    if(f(l)*f(x)>0)
    l=x;
    else
    r=x;
  }
  printf("%.2\n",x);
  return 0;
}

float f(float x)
{
  float A;
  A=a0+x*(a1+x*(a2+a3*x));
  return A;
}


