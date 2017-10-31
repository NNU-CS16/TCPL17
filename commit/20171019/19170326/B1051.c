#include<stdio.h>
#include<math.h>
int main()
{
        float R1,P1,R2,P2;
	scanf("%f%f%f%f",&R1,&P1,&R2,&P2);
	float a,b,c,d;
	a=R1*cos(P1);
	b=R1*sin(P1);
	c=R2*cos(P2);
	d=R2*sin(P2);	
	char i;
	float x,y,z;
	x=a*c-b*d;
	y=b*c+a*d;
	if(y==0)
		printf("%.2f\n",x);
	if(y>0)
		printf("%.2f+%.2f%c\n",x,y,'i');
	if(y<0)
		y=-y;
		printf("%.2f-%.2f%c\n",x,y,'i');
	return 0;
}
