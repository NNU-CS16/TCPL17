/*7.c_二项式系数*/
#include <stdio.h>

int BinomialCoefficient(int n, int k);

int main()
{
	int n, k;
	printf("请输入n和k：");
	scanf("%d%d", &n, &k);
	printf("%d\n", BinomialCoefficient(n, k));
	return 0;
}

int BinomialCoefficient(int n, int k)
{
	if (k == n || k == 0)
		return 1;
	return BinomialCoefficient(n - 1, k) + BinomialCoefficient(n - 1, k - 1 );
}
