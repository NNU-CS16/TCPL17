#include<stdio.h>
int BinomialCoefficient(int n,int k)
{
    if(k==n)
     return 1;
    if(k==0)
     return 1;
    return  BinomialCoefficient(n-1,k-1)+ BinomialCoefficient(n-1,k);
}
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    printf("%d", BinomialCoefficient(n,k));
    return 0;
}
