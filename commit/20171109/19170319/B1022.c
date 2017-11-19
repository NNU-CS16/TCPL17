#include <stdio.h>
int main()
{
    int a,b,c,d;
    int e = 0,f = 0;
    scanf("%d%d%d",&a,&b,&d);
    c = a + b;
    for ( ;c > 0; )
    {
        e *= 10;
        e = e + c % d;
        c /= d;
    }
    for ( ;e > 0;)
    {
        f *= 10;
        f = f + e % 10;
        e /= 10;
    }
    printf("%d",f);
    return 0;
}
