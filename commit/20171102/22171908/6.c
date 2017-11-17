#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
  int i;
  for(i=2;i<=sqrt(n);i++)
  {
    if(n%i==0)
    return -1;
    else
    return 0;
  }
}
int main()
{
  int n=2,t=1;
  scanf("%d",&n);
  while(t<1000)
  {
    if(is_prime(n)==0)
    {
      t++;
      if(t>100)
      printf("%d\n",n);
      n++;
     }
  }return 0;
}
  
