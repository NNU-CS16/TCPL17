#include<stdio.h>
#include<math.h>
int main()
{
    float R1,P1,R2,P2;
    double a,b;
    printf("please input R1,P1,R2,P2:");
    scanf("%f%f%f%f",&R1,&P1,&R2,&P2);
    a=R1*R2*cos(P1+P2);
    b=R1*R2*sin(P1+P2);
    if(b>0)
    printf("%0.2f+%0.fi",a,b);
    else
    printf("%0.2f-%0.2fi",a,-b);
    return 0;
}
