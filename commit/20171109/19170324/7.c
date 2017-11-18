#include <stdio.h>
int BinomialCoefficient(int n, int k);

int main()
{
	int n, k;
	scanf("%d%d", &n, &k);
	if (k > n)
		printf("no answer!\n");
	printf("%d\n", BinomialCoefficient(n, k));

	return 0;
}

int BinomialCoefficient(int n, int k)
{
	if (n == k)
		return 1;
	if (k == 1)
		return n;

	return BinomialCoefficient(n - 1, k - 1) + BinomialCoefficient(n - 1, k);
}
