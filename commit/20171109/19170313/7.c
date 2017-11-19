#include <stdio.h>
int BinomialCoefficient(int n, int k);
int main()
{
    int n, k, m;
    printf("n >= k\n");
    scanf("%d%d", &n, &k);
    m = BinomialCoefficient(n, k);
    printf("%d\n", m);
    return 0;
}
int BinomialCoefficient(int n, int k)
{
    if (n == 1)
        return 1;
    if (n >= 2)
    {
        if (k == 0 || k == n)
            return 1;
        if (k >= 1 && k <= n - 1)
            return BinomialCoefficient(n - 1, k - 1) + 
                   BinomialCoefficient(n - 1, k);
    }
}
