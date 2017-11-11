#include<stdio.h>
int fac_bit_count(int n)
{
	int a=1,i;
	for(i=1;i<=n;i++)
		a=a*i;
	for(i=0;a>0;i++)
		a/=10;
	return i;
}
int main()
{
	int m;
	scanf("%d",&m);
	printf("%d",fac_bit_count(m));
	return 0;
}

