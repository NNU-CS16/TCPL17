#include<stdio.h>

unsigned invert (unsigned x, int p,int n);

main()
{
    int a, b;

    a = 26;
    b = invert (a, 5, 2);
    printf("%d\n", b);

    return 0;

}

unsigned invert(unsigned x, int p, int n)
{
    int a, b, c, d, e;

    a = (x >> (p+1)) << (p+1);
    b = x - a;
    c = b >> (p+1-n);
    d = c << (p+1-n);
    e = (~c & ~(~0 << n)) << (p+1-n);
    x= a + e + (b - d);

    return x; 
}
