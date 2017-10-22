#include <stdio.h>
#include <math.h>

double a0,a1,a2,a3;
double f(double x)
   { return a3*x*x*x+a2*x*x+a1*x+a0;}

int main(void)
{
    double a,b,m;
    scanf("%lf%lf%lf%lf",&a3,&a2,&a1,&a0);
    scanf("%lf%lf",&a,&b);

    while (fabs(a-b)>1e-3)
    {

      if (fabs(f(a))<1e-6) {m=a; break;}
      if (fabs(f(b))<1e-6) {m=b; break;}

      m=(a+b)/2;

      if (fabs(f(m))<1e-6) break;
      if (f(a)*f(m)<0) b=m;

      else a=m;
     }
    printf("%.2f\n",m);

    return 0;
}
