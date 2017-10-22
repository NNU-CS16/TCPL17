#include<stdio.h>
#include<math.h>
double a3,a2,a1,a0;
int f(double x)
{
	double m;
	m=a3*x*x*x+a2*x*x+a1*x+a0;
	return m;
}
int main()
{
	double a,b,c;
	scanf("%lf %lf %lf %lf\n",&a3,&a2,&a1,&a0);
	scanf("%lf %lf\n",&a,&b);
do
{
	if(f(a)==0) printf("%.2lf",a);
	if(f(b)==0) printf("%.2lf",b);
	if(f(a)*f(b)<0)
	{	
		c=f((a+b)/2);
		if(c*f(a)>0)
			a=(a+b)/2;
		if(c*f(b)>0)
			b=(a+b)/2;
	}

}while(b-a>=0.001);
printf("%.2lf",(a+b)/2);
return 0;
}

