#include<stdio.h>
float f(float x);
float a0,a1,a2,a3;

int main()
{
     float a,b,m;
     scanf("%f %f %f %f",&a3,&a2,&a1,&a0);
     scanf("%f %f",&a,&b);
     while(a<=b-0.001&&f(a)*f(b)<=0)
     {
     m=(a+b)/2;
     if(f(a)*f(b)>0)
       {
          a=m;
       }
     else 
       {
          b=m;
       }
     if(f(a)==0)
       { 
          printf("%.2lf",a);
          return 0;
       }
     if(f(b)==0) 
       {
          printf("%.2lf",b);
          return 0;
       }
     }
     printf("%.2f",m);
     return 0;
}
float f(float x)
{
     float r;
     r=(a1+(a2+a3*x)*x)*x;
     return r;
} 
 
     

