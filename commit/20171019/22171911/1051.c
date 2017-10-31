#include<stdio.h>
#include<math.h>
int main( )
{
  float R1,P1,R2,P2,A,B;
  scanf("%f %f %f %f",&R1,&P1,&R2,&P2);
    A=R1*R2*cos(P1+P2);
    B=R1*R2*sin(P1+P2);
    if(A<0&&A>-0.005)
      A=0;
    if(B<0&&B>-0.005)
      B=0;
  printf("%.2f%+.2f",A,B);
  return 0;
}



