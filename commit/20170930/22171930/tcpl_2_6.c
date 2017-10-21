#include<stdio.h>
int main()
{
  unsigned x,y;
  int p,n;
  x=x&~(~(~0<<n)<<(p+1-n));
  y=~(~(~0<<n)<<(p+1-n));
  x=x||y;
  printf("%d\n",x);
  
  return 0;
}
  


