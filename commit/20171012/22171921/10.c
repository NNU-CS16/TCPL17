#include<stdio.h>
#include<math.h>
int main()
{
double a0,a1,a2,a3;
scanf("%lf%lf%lf%lf",&a3,&a2,&a1,&a0);
double a,b;
scanf("%lf%lf",&a,&b);
double result;
while((b-a)>0.01)
{
double s=(a+b)/2;
double fs=a3*s*s*s+a2*s*s+a1*s+a0;
double fa=a3*a*a*a+a2*a*a+a1*a+a0;
double fb=a3*b*b*b+a2*b*b+a1*b+a0;
if(fa==fb)
{
printf("%d\n",fa);
return 0;
}
if(fa*fb<=0)
if(fs/fabs(fs)==fa/fabs(fa))
a=s;
else
b=s;
result=fs;
}
printf("%.2lf\n",(a+b)/2);
return 0;
}           

