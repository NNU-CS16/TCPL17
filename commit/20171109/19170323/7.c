 #include <stdio.h>
 int BinomialCoefficient(int n, int k)
{
	if (k == 0 || k == n)
		return 1;
	return  BinomialCoefficient(n-1, k-1) + BinomialCoefficient(n-1, k);
}

 int main()
{
	int N, K, sum;
	scanf("%d %d", &N, &K);
	sum = BinomialCoefficient(N, K);
	printf("%d\n", sum);
	return 0;
}

