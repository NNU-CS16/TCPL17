#include <stdio.h>

int LCM(int m, int n);
int main()
{
    int m, n, o;
    scanf("%d%d", &m, &n);
    o = LCM(m, n);
    printf("%d\n", o);
   
    return 0;
}

int LCM(int m, int n)
{
    int a, b, c, d;
    a = m;
    b = n;
    for ( ; b != 0; )
    {
        c = a % b;
        a = b;
        b = c;
    }
    d = m * (n / a);
    return d;   
}
