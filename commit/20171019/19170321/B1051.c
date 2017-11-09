#include<stdio.h>
#include<math.h>
int main()
{
  double R1,P1,R2,P2,a,b,c,d,x,y;
  scanf("%lf %lf %lf %lf",&R1,&P1,&R2,&P2);
  a=R1*cos(P1);
  b=R1*sin(P1);
  c=R2*cos(P2);
  d=R2*sin(P2);
  x=a*c-b*d;
  y=c*b+a*d;
  if(x>-0.005 && x<0)
    printf("0.00");
  else
    printf("%.2lf",x);
  if(y>-0.005 && y<0)
    printf("+0.00i",y);
  else
    printf("%+.2fi",y);
  return 0;
}
