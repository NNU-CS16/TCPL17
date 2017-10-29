#include <stdio.h>
#include <math.h>
int main()
{
	int a, b;
	int c;
	scanf("%d%d%d",&a,&b,&c);

	int m,n;
	for(m=1;m<b;m++)
	{
	a=a*a;
	}
	n=a%c;
	printf("%d",n);
	return 0;
}
