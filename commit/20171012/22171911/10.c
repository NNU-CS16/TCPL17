#include<stdio.h>
float f(float x);
float a3,a2,a1,a0;
int main( )
{
float a,b,c;
scanf("%f%f%f%f",&a3,&a2,&a1,&a0);
scanf("%f%f",&a,&b);

if(f(a)==0)
c=a;
if(f(b)==0)
c=b;
while(f(a)*f(b)<0&&b-a>=0.001)
{
  c=(a+b)/2;
if(f(c)*f(a)>0)a=c;
if(f(c)*f(b)>0)
b=c;
if(f(c)==0) 
break;
}
printf("%0.2f",c);
return 0;
}
float f(float x)
{
  float y;
y==a3*x*x*x+a2*x*x+a1*x+a0;
return y;
}

