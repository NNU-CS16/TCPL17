#include <stdio.h>
int BinomialCoefficient(int n,int k)
{
	if ( k == 0 || k == n ) //出口
		return 1;
	else
		return BinomialCoefficient(n-1,k) + BinomialCoefficient(n-1,k-1);
	//阶乘
}
int main()
{
	int n,k,c;
	scanf("%d%d",&k,&n);
	c = BinomialCoefficient(n,k);
	printf("%d",c);
}
