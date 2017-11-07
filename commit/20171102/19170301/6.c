#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
int i,k;
k = sqrt(n);
for(i = 2;i <= k;i++)
  {
 if(n % i == 0)
  break;
}
  if(i > k)
   return 0;
  else
      return -1;
}
int main()
{   
  int n=2, m=0;
  while(m < 1000)
{
if(is_prime(n) == 0)
{ 
  m++;
   if(m >= 100)
  printf("%d ",n);
}
 n++;
}
  return 0;

}
