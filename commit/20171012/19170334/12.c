#include <stdio.h>
int main()
{
	int a,b,m,n;
	int c;
	char x;
	scanf("%d%c%d",&a,&x,&b);
	m=a;
	n=b;
	while(b!=0)
{
	c=a%b;
	a=b;
	b=c;
}
	
	m/=a;
	n/=a;
	printf("%d/%d",m,n);
	return 0;
}
