#include <stdio.h>
int BinomialCoefficient(int n, int k);


int BinomialCoefficient(int n, int k)
{
  if(k==1)
  return n;
  else return  BinomialCoefficient(n,  k-1);
}

int main()
{
   int n,k;
   scanf("%d%d",&n,&k);
   printf("%d\n",BinomialCoefficient( n, k));
   return 0;
}

