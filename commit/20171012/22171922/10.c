#include<stdio.h>
#include<math.h>
double f(double,double,double,double,double);
int main()
{
double a3,a2,a1,a0;
scanf("%lf %lf %lf %lf",&a3,&a2,&a1,&a0);
double a,b,mid,out,oa;
scanf("%lf %lf",&a,&b);
if(a>b) {double temp;temp=a;a=b;b=temp;}
if(b-a<0.001) {printf("%lf",(a+b)/2);return 0;}
	while(1)
	{
	mid=(a+b)/2;
	out=f(mid,a3,a2,a1,a0);
	oa=f(a,a3,a2,a1,a0);
	if (fabs(out)<0.001) {printf("the out put is %.2f\n",mid);break;}
	else {if(out*oa>0) a=mid;
	else b=mid;}
	}
return 0;
}

double f(double n,double a3,double a2,double a1,double a0)
{
return a3*n*n*n+a2*n*n+a1*n+a0;
}
