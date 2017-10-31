#include <stdio.h>
#include <math.h>
int main()
{
  float R1,P1,R2,P2;
  scanf("%f %f %f %f",&R1,&P1,&R2,&P2);
  
  float a1,b1,a2,b2,A,B;
  a1=R1*cos(P1);
  b1=R1*sin(P1);
  a2=R2*cos(P2);
  b2=R2*sin(P2);
  A=a1*a2-b1*b2;
  B=a1*b2+a2*b1;
  
  char i;
  if(B>0) printf("%.2f+%.2f",A,B);
  else if(B==0) printf("%.2f",A);
  else printf("%.2f%.2fi\n",A,B);
  
  return 0;
}
