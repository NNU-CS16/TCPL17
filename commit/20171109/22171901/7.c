#include <stdio.h>
int BinomialCoefficient (int n , int k);


int main()
{
   int n , k , res;
   scanf ("%d%d",&n , &k);
   res = BinomialCoefficient(n , k);
   printf ("%d\n" , res);
   return 0;
}


int BinomialCoefficient(int n , int k)
{
    if (k == n || k == 0)
       return 1;
    else
        return BinomialCoefficient(n - 1 , k - 1) +BinomialCoefficient(n - 1 , k);

}



