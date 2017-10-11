#include<stdio.h>
#include<math.h>
int main()
{
	float x,y;
	printf("input the value of X:");
	scanf("%f",&x);
	y=pow(x,3)+2*pow(x,2)+3*x+1;
	printf("y=%f\n",y);

	return 0;
}

