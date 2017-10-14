#include<stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    return x & ~(~(~0<< n) << (p+1-n)) | (y & ~(~0 << n)) << (p+1-n); 
}

int main()
{
    unsigned int x = 52;
    unsigned int y = 11;
    int p = 4;
    int n = 2;
    int r;
    r = setbits(x,p,n,y);
    printf("%d",r);
    return 0;
}
