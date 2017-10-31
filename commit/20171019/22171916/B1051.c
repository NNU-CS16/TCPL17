#include<stdio.h>
#include<math.h>
#define EPSILON 0.01
int main(int argr,const char*argv[])
{
double r1,r2,p1,p2;
double a,b;
scanf("%lf %lf %lf %lf",&r1,&p1,&r2,&p2);
a=(r1*r2)*cos(p1+p2);
b=(r1*r2)*sin(p1+p2);
if (fabs(a)<EPSILON)
       {a=0;}
if (fabs(b)<EPSILON)
       {b=0;}
if (b<0)
       {printf("%.2lf-%.2lfi",a,fabs(b));}
else   {printf("%.2lf+%.2lfi",a,b);}





return 0;


}
