#include<stdio.h>
int binomialcoefficient(int n,int k)
{
   if(n==k||k==0)
   return 1;
   else return binomialcoefficient(n-1,k)+binomialcoefficient(n-1,k-1);
}
int main()
{
  int k,n;
  scanf("%d %d",&k,&n);
  int sum=binomialcoefficient(n,k);
  printf("%d",sum);
  return 0;
}
