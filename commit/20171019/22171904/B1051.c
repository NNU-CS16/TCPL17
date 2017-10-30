#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
int main(){
double r1,p1,r2,p2;
scanf("%lf %lf %lf %lf",&r1,&p1,&r2,&p2);
double a;
a=r1*r2*(cos(p1+p2));
if(fabs(a)<0.01)
a=0;
printf("%0.2lf",a);
double b;
b=r1*r2*sin(p1+p2);
if (fabs(b)<0.01)
b=0;
if (b>=0)
printf("+");
printf("%0.2lf",b);
printf("i");
}
