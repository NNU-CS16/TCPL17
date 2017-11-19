#include <stdio.h>
int main()
{
    int a, b, d, c, e [ 32 ] , i, f, j;
    printf("A <= 2 ^30 - 1  B <= 2 ^ 30 - 1  1 < D <= 10\n");
    scanf("%d%d%d", &a, &b, &d);
    c = a + b;
    for (i = 0; ; )
    {
        f = c % d;
        e [ i ] = f;
        i++;
        c = c / d;
        if (c == 0)
            break;
    }
    i--;
    for (j = i;j >= 0;j--)
        printf("%d", e [ j ] );
    printf("\n");
    return 0;
}
