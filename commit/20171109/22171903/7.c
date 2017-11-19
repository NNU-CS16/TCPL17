#include <stdio.h>
int c;
int BinomialCoefficient(int n, int k);
int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    printf("%d\n", BinomialCoefficient(n, k));
    return 0;
}

int BinomialCoefficient(int n, int k)
{
    if (k == 1)
    {
	c = c + n;
    }
    else if (k == n)
    {
	c++;
    }
    else
    {
	BinomialCoefficient(n - 1, k - 1) + BinomialCoefficient(n - 1, k);
    }
    return c;
}
