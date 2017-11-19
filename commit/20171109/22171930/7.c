#include <stdio.h>
int BinomialCoefficient(int n,int m);
int main()
{
    int n,k,a;
    scanf("%d%d", &n, &k);
    a = BinomialCoefficient(n,k);
    printf("%d", a);
    return 0;
}
int BinomialCoefficient(int n,int k)
{
    if (k == 1)
    return n;
    else 
    return BinomialCoefficient(n,k-1) * (n - k + 1) / k;
}
