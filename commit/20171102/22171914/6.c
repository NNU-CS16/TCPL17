#include <stdio.h>
int is_prime(int n)
{
  int i;
  for(i=2;i<=n/2;i++)
  if(n%i==0)
   return 0;
  else
   return -1;
}
int main()
{
  int i;
  for(i=100;i<=1000;i++)
  if(is_prime(i)==1)
  printf("%d\t",i);
  printf("\n");
  return 0;
} 
