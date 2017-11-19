#include <stdio.h>
int main()
{
    int i, j = 0, s = 0, sh [ 10000 ] , b = 0, c = 0, t [ 100000 ] ;
    char a [ 100000 ] ;
    for (i = 0;i < 100000;i++)
    {
        scanf("%c", &a [ i ] );
        if (a [ i ] == '\n')
            break;
    }
    i = 0;
    while (a [ i ] != '\n')
    {
        if (a [ i ] >= 'A' && a [ i ] <= 'Z')
            t [ j ] = a [ i ] - 'A' + 1;
        if (a [ i ] >= 'a' && a [ i ] <= 'z')
            t [ j ] = a [ i ] - 'a' + 1;
        j++;
        i++;
    }
    for (i = 0;i <= j;i++)
        s = s + t [ i ] ;
    for (i = 0; ;i++)
    {
        sh [ i ] = s % 2;
        s = s / 2;
        if (s == 0)
            break;
    }
    for (j = 0;j <= i;j++)
    {
        if (sh [ j ] == 0)
            b++;
        if (sh [ j ] == 1)
            c++;
    }
    printf("%d %d\n", b, c);
    return 0;
}
