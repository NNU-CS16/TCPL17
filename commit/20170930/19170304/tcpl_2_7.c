#include<stdio.h>
unsigned invert(unsigned x,int p,int n)
{
   return x & ~(~(~0<<n)<<(p-n));
}
int main()
{
    unsigned x=121;
    int p=5, n=3;
    printf("%u\n",invert(x,p,n));
    return 0;
}

    








