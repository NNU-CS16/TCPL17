#include<stdio.h>
#include<math.h>
int main()
{
  double R1,P1,R2,P2;
  double a1,a2,a3,b1,b2,b3;
  scanf("%lf %lf %lf %lf",&R1,&P1,&R2,&P2);

  a1=R1*cos(P1);
  b1=R1*sin(P1);

  a2=R2*cos(P2);
  b2=R2*sin(P2);

  a3=a1*a2-b1*b2;
  b3=b1*a2+a1*b2;

  if(-0.005<a3&&a3<0)
    printf("0.00");
  else
    printf("%.2lf",a3);
  
  if(b3>=0)
    printf("+%.2lf",b3);
  else if(-0.005<b3&&b3<0)
    printf("+0.00i\n");
  else
    printf("%.2fi\n",b3);

  return 0;
}
     

 

