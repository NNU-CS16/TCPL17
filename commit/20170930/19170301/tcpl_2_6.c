#include<stdio.h>
unsigned setbits(unsigned x, int p, int n, unsigned y)
{
	int i, j, m;
	i=(x>>p)&(~0<<n);
	j=(y&~(~0<<n));
	m=i|j;
	x=(m<<p)|(x&~(~0<<p));
	return x;
}
int main()
{
	int a,b;
	printf(":a=, b=");
	scanf("%d,%d",&a,&b);
	printf("x=%d\n", setbits(a, 2, 2, b));
	return 0;
}
