#include<stdio.h>
int main()
{
	int n,a,b;
	scanf("%d",&n);
	a=((n>>4)&(~(~0<<4)))*10;
	b=n&(~(~0<<4));
	n=a+b;
	printf("%d",n);
	return 0;
}
