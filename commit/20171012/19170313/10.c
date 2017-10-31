#include<stdio.h>
float a3,a2,a1,a0;
float f(float x)
{
return a3*x*x*x+a2*x*x+a1*x+a0;
}
int main()
{
float a,b,c;
scanf("%f%f%f%f",&a3,&a2,&a1,&a0);
scanf("%f%f",&a,&b);
while(a<=b-0.001&&f(a)*f(b)<=0)
{
if(f(a)==0)
{
printf("%.2f",a);
return 0;
}
if(f(b)==0)
{printf("%.2f",b);
return 0;
}
c=(a+b)/2:
if(f(c)*f(a)>0)
{
a=c;
}
else
{
b=c;
}
}
printf("%.2f",c);
return 0;
}
