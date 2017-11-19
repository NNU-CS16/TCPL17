#include <stdio.h>
int BinomialCoefficent(int n, int k)
{
    if (n == k || k == 0)
        return 1;
    return BinomialCoefficent(n - 1, k - 1) + BinomialCoefficent(n - 1, k);
}
int main( )
{
    int n, k;
    scanf ("%d%d", &n, &k);
    printf ("BinomialCoefficent(n, k) = %d", BinomialCoefficent(n, k));
    return 0;
}    
