#include <stdio.h>  
float f(float x);  
float a3, a2, a1, a0; 
float f(float x)  
{  
float result;  
result=a3*x*x*x + a2*x*x + a1*x + a0;  
return result;  
}
int main()  
{  
float a, b;  
scanf("%f %f %f %f", &a3, &a2, &a1, &a0);  
scanf("%f %f", &a, &b);  
float l, m, r;  
l=a;  
r=b;
  
while(l<=r-0.001 && f(l)*f(r)<=0)
{
if(f(l)==0)
{
printf("%.2f\n",l);
return 0;
}
if(f(r)==0)
{
printf("%.2f\n",r);
return 0;
}
m=(l+r)/2;
if(f(m)*f(l)>0)
{
l=m;
}
else
{
r=m;
}
}
printf("%.2f\n",m);
return 0;
}   
