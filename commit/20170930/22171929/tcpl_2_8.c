#include <stdio.h>
unsigned rightrot(unsigned int x,int n)
{
  int wordlength(void);
  unsigned rbits;
  if((n=n%wordlength())>0)
  {
     rbits=~(~0<<x)&x;
     rbits=rbits<<(wordlength()-n);
     x=(x>>n)|rbits;
  }
  return x;
}
