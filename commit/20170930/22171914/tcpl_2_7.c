#include <stdio.h>
#include <assert.h>
unsigned invert(unsigned x,int p,int n)
{
         unsigned t;
         assert(p>=n);
         t=x>>(p-n+1);
         x>>=(p-n+1);
         x^=~(~0<<n);
         x=(x<<(p-n+1))|t;
         return x;
}
int main()
{
    unsigned x=11;
    int p=2, n=2;
    printf("%u,%u\n",x,invert(x,p,n));
    return 0;
}
