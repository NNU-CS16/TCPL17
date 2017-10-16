#include <stdio.h>
#include <math.h>
int main()
{
	float x,a,b,c;
	scanf("%f%f%f%f",&x,&a,&b,&c);
	x=fabs(x);
	if (sqrt(x)!=(4*a)/(b*c))
		   printf("yes\n");
	else
		   printf("no\n");
	return 0;
}
