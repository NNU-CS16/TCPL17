#include<stdio.h>
int main()
{
	float a3,a2,a1,a0;
	float a,b,c,x;
	float f(float x);
	scanf("%f%f%f%f",&a3,&a2,&a1,&a0);
	scanf("%f%f",&a,&b);
	if(f(a)==0)
		printf("c=a");
	if(f(b)==0)
		printf("c=b");
	while(f(a)*f(b)<0&&b-a>=0.001)
	{
		c-(a+b)/2;
		if(f(c)*f(a)>0)a=c;
		if(f(c)*f(b)>0)b=c;
	}
	printf("%.2f",c);
	float result;
	result=a3*x*x*x+a2*x*x+a1*x+a0;
	return 0;
}

