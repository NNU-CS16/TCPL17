#include<stdio.h>
int main()
{
	float r1,p1,r2,p2;
	float a,b;
	scanf("%f%f%f%f",&r1,&p1,&r2,&p2);
	a=r1*r2-p1*p2;
	b=r2*p1+r1*p2;
	if(b>0)
	printf("%.2f+%.2fi\n",a,b);
	else
	printf("%.2f-%.2fi\n",a,b);
	return 0;
}
