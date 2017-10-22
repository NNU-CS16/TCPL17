#include <stdio.h>
int main()
{
    unsigned short int x=73,p=13,n=3,m;

    m=x^(~((~0)<<n)<<(16-(p-1+n)));

    printf("m=%d\n",m);

    return 0;
}
