#include<stdio.h>
#include<math.h>
double a0,a1,a2,a3;
double fun(double x)
{
return a3*x*x*x+a2*x*x+a1*x+a0;
}

int main()
{
float a,b,c;
printf("请输入a0,a1,a2,a3,a,b的值:");
scanf("%lf%lf%lf%lf",&a0,&a1,&a2,&a3);
scanf("%lf%lf",&a,&b);
if(fun(a)==0) c=a;
if(fun(b)==0) c=b;
while(fun(a)*fun(b)<=0&&fabs(b-a)>1e-2)
 {
 c=(a+b)/2;
 if(fun(c)*fun(a)>=0) a=c;
 else b=c;
 if(fun(c)==0) break;
 }

printf("%0.2f",c);
return 0;


}
