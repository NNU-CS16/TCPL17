  #include <stdio.h>
  int BinomialCoefficient(int n, int k);

  int main()
  {
     int n,k;
     scanf("%d %d",&n,&k);
     printf("%d\n", BinomialCoefficient( n, k ));
     return 0;
  }

  int BinomialCoefficient(int n, int k)
  {
     if(k==0||n==k)  return 1;
     return  BinomialCoefficient( n-1, k-1 ) + BinomialCoefficient( n-1, k );
  }
