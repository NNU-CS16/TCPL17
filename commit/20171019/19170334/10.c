#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int m,n;
	m=pow(a,b);
	n=m%c;
	printf("%d",n);
	return 0;
}
