#include<stdio.h>
#include<math.h>
int main()
{
	int x,a,b,c;

	x=-4,a=3,b=1,c=6;
	if(sqrt(fabs(x))!=(4*a)/(b*c))
		printf("成立\n");
	else
		printf("不成立\n");
		
	return 0;
}
