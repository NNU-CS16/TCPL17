#include<stdio.h>
#include<math.h>
int main(void)
{
    double R1,R2,P1,P2;
    double A,B;
    scanf("%lf%lf%lf%lf",&R1,&P1,&R2,&P2);
    A=R1*R2*cos(P1+P2);
    B=R1*R2*sin(P1+P2);
    if(A<0&&A>-0.0005)
    A=0;
    if(B<0&&B>0.0005)
    B=0;
    printf("%.2lf+%.2lfi",A,B);
    return 0;
}

