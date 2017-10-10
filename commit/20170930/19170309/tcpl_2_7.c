#include<stdio.h>
int main()
{

int x,p,n,y;
    x=93;
    p=4;
    n=3;
    y= ((((~0<<p)|(~(~0<<(p-n))))&x) | ( (~(~0<<n))<<(p-n)&~x));
printf("%d\n", y);

return 0;
}
