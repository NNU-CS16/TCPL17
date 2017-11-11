#include<stdio.h>
 int fac_bit_count(int n)
 {
  int i,s=1,x=0;
  for(i=1;i<=n;i++)
  s=s*i;
  for(;s!=0;s/=10)
  x++;
  return x;
 }
 int main()
 {
  int n;
  scanf("%d",&n);
  printf("%d\n",fac_bit_count(n));
  return 0;
 }

