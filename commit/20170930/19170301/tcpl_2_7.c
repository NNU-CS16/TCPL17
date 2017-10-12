#include<stdio.h>
unsigned invert(unsigned x, int p ,int n);
int main()
{
	int a;
	printf("a=");
	scanf("%d",&a);
	printf("%d\n", invert(a, 3, 1));
	return 0;
}
  unsigned invert(unsigned x, int p, int n)
{ 
	int i,j,m;
	i=(x>>p)&~(~0<<n);
	printf("i=%d\n",i);
	i=(~i)&~(~0<<n);
	x=(x&~(~0<<p))|((((x>>(p+n))<<n)|i)<<p);
	printf("i=%d\n",x);
	return 0;
}
