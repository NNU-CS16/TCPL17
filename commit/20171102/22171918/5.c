#include <stdio.h>
int fac_bit_count(int n);
int main ()
{
   int n;
   scanf("%d",&n);
   printf("%d\n",fac_bit_count(n));
   return 0;
}
int fac_bit_count(int n)
{
  int i,j=1,count=0;
  for(i=1;i<=n;i++)
      j*=i;
  while(j)
  {
    count++;
    j/=10;
  }
  return count;
}
