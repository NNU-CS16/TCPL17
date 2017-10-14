#include<stdio.h>
#include<math.h>

int a=0;
unsigned rightrot(unsigned x,int n)
{
  return (~(~0<<n)&x)<<(a-n)|x>>n;
}

 int main()
{
  unsigned x=63;
  int n=3;
  do
{   a++;  }
  while(pow(2,a)<=x);
  printf("%u\n",rightrot(x,n));  

  return 0;
}
