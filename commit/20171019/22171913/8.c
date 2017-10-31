#include<stdio.h>
#include<math.h>
int main()
{
    double A,B,R1,P1,R2,P2;
    scanf("%1f %1f %1f %1f",&R1,&P1,&R2,&P2);
    A=R1*R2*cos(P1+P2);
    B=R1*R2*sin(P1+P2);

    if(A<0&&A>-0.005)  A=0;
    if(B<0&&B>-0.005)  B=0;
    printf("%.21f%+.21fi",A,B);
    return 0;
}

    
