#include<stdio.h>
unsigned invert(unsigned x,int p,int n)
{
    return x ^(~(~0<<n)<<(p-n+1));
}

    int main()
{
    unsigned int x=108;
    unsigned int y;
    int p=5;
    int n=3;
    y=invert(x,p,n);
    printf("%d\n",y);
}


