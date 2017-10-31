#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,d,r1,p1,r2,p2;
	scanf("%lf%lf%lf%lf",&r1,&p1,&r2,&p2);
	c=r1*r2;
	d=p1+p2;
	a=c*cos(d);
	b=c*sin(d);

	if(a<0 && a>-0.005)
	  a=0;
	if(b<0 && b>-0.005)
	  b=0;
	if(b>=0)
	  printf("%.2lf+%.2lfi",a,b);
	else
	  printf("%.2lf%.2lfi",a,b);


	return 0;
}
