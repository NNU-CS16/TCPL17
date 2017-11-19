#include<stdio.h>
int BinomialCoefficient(int n, int k); 
int main()
{

int n,k;
scanf("%d %d", &n,&k);
printf("%d", BinomialCoefficient(n,k) );
return 0;
}
int BinomialCoefficient(int n, int k)
{
int c;
if(n==k)
return 1;
else if(k==1)
  {c=n;
   return c;}
else 
    {
     return n= BinomialCoefficient(n-1, k-1)+ BinomialCoefficient(n-1, k);} 
  } 
