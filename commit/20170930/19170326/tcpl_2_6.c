#include<stdio.h>
unsigned setbits(unsigned x,int p,int n,unsigned y)
{
return ~((~(~0<<n))<<(p-n+1))&x | ((~(~0<<n))&y)<<(p-n+1);
}
