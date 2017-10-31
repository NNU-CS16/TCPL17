#include<stdio.h>
#include<math.h>
int main()
{
    double A,B;
    double R1,R2,P1,P2;
    char i;
    printf("请依次输入两个复数的R1,P1,R2,P2:");
    scanf("%lf%lf%lf%lf",&R1,&P1,&R2,&P2);
    A=R1*R2*(cos(P1)*cos(P2)-sin(P1)*sin(P2));
    B=R1*R2*(cos(P1)*sin(P2)+sin(P1)*cos(P2));
    if(B>0)
      printf("%.2lf+%.2lfi\n",A,B);
    else
      printf("%.2lf-%.2lfi\n",A,fabs(B));
    return 0;
}
    
    
