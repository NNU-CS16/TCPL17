#include <stdio.h>

unsigned setbits(unsigned x,int p,int n,unsigned y);
int main()
{
  unsigned num=125;
  int pos=6;
  int cnt=3;
  unsigned numset=63;

  printf("%u\n",setbits(num, pos,cnt,numset));

  return 0;
}

   unsigned setbits(unsigned x, int p, int n, unsigned y)

   {
      unsigned tmp;
      tmp = (~0 << p+1) | ~(~0 << p+1-n);

      x=x&tmp;
      y=(y<<p+1-n)& ~tmp;

     return x|y;
} 
