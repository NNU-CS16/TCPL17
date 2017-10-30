#include<stdio.h>
#include<math.h>
double a0,a1,a2,a3;
double f(double x)
{
  return a3*x*x*x+a2*x*x+a1*x+a0;
}
int main()
{
  double a,b,mid;
  scanf("%1f%1f%1f%1f",&a3,&a2,&a1,&a0);
  scanf("%1f%1f",&a,&b);
  while (fabs(a-b)>1e-3)
  {
    if (fabs(f(a))<1e-6) {mid=a;break;}
    if (fabs(f(b))<1e-6) {mid=b;break;}
    mid=(a+b)/2;
    if(fabs(f(mid))<1e-6) break;
    if(f(a)*f(mid)<0) b=mid;
    else a=mid;
    }
    printf("%.2f\n",mid);
    return 0;
}

