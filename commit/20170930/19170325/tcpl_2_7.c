#include <stdio.h>
unsigned invert(unsigned x,int p,int n)
{  
  return x & ~(~(~0<<n)<<(p-n)) | ~(x | ~(~(~0<<n)<<(p-n)));
}
int main()

{
    unsigned x=36;
    int p=2,n=3;
    printf("%u\n",invert(x,p,n));
    return 0;



}
