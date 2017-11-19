#include <stdio.h>
int BinomialCoefficient(int n,int k);

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    BinomialCoefficient(n,k);
    printf("%d\n",BinomialCoefficient(n,k));
    return 0;
}

int BinomialCoefficient(int n,int k)
{
    if (n==k||k==0)
        return 1;
    return BinomialCoefficient(n-1,k-1)+BinomialCoefficient(n-1,k);
} 
