#include<stdio.h>
#include<math.h>
int fac_bit_count(int n)
{
	double a=0;
	int i,m;
	for(i=1;i<=n;i++)
	  a=a+log10(i);
	m=a+1;
	return m;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",fac_bit_count(n));
	return 0;
}
