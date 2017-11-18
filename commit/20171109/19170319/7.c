#include <stdio.h>
int BinomialCoefficent(int n,int k)
{
    if (k == 0)
        return 1;
    if (k == 1)
        return n;
    if (n == k)
        return 1;
    else
        return BinomialCoefficent(n - 1,k - 1) + BinomialCoefficent(n - 1,k);
}
int main()
{   
    int n,k;
    scanf("%d%d",&n,&k);
    printf("%d",BinomialCoefficent(n,k));
    return 0;
}
