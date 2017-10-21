#include<stdio.h>
#include<math.h>
double a3,a2,a1,a0;
double f(double x);
int main(void)
{
  double a,b,mid;
  scanf("%lf%lf%lf%lf",&a3,&a2,&a1,&a0);
  scanf("%lf%lf",&a,&b);
  if(f(a)==0)mid=a;
  if(f(b)==0)mid=b;
  while(f(a)*f(b)<&&b-a>=1e-3)
  {
    mid=(a+b)/2;
    if(f(mid)*f(a)>0)mid=a;
    if(f(mid)*f(b)>0)mid=b;
    if(f(mid)==0)break;
  }
  printf("%2lf",mid);
  return 0;
}
double f(double x)
{
  double result;
  result = a3*x*x*x+a2*x*x+a1*x+a0;
  return result;
}
