#include <stdio.h>
int BinomialCoefficient(int n, int k);

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",BinomialCoefficient(a,b));
    return 0;
}
int BinomialCoefficient(int n, int k)
{
    if (k == 1)
    return n;
    else
    return BinomialCoefficient(n, k - 1) * (n - k + 1) / k;
}
