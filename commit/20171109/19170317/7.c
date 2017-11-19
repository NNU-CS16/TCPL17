#include <stdio.h>
int BinomialCoefficient(int n, int k);

int main()
{
	int n, k;
	printf("n = ");
	scanf("%d", &n);
	printf("k = ");
	scanf("%d", &k);
	printf("%d\n", BinomialCoefficient(n, k));
	return 0;
}

int BinomialCoefficient(int n, int k)
{
	if (k == 1)
	  return n;
	else if (n == k)
	  return 1;
   	else
		return BinomialCoefficient(n - 1, k - 1) + BinomialCoefficient(n - 1, k);
}
