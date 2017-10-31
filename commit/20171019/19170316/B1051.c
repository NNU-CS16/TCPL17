#include<stdio.h>
#include<math.h>
int main()
{
double R1,P1,R2,P2,A,B;
scanf("%lf%lf%lf%lf",&R1,&P1,&R2,&P2);
double a,b,c,d;
a=R1*(cos(P1));
b=R1*(sin(P1));
c=R2*(cos(P2));
d=R2*(sin(P2));
A=a*c-b*d;
B=a*d+b*c;
printf("%.2f+%.2fi",A,B);
return 0;
}
