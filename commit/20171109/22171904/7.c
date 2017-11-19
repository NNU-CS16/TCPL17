#include <stdio.h>

int BinomialCoefficient(int n,int k)
{
	if(k==0||k==n)
		return 1;
		return BinomialCoefficient(n-1,k)+BinomialCoefficient(n-1,k-1);
}

int main()
{
	int n,k,c;
	scanf("%d%d",&n,&k);
	c=BinomialCoefficient(n,k);
	printf("%d",c);

}

