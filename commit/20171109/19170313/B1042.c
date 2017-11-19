#include <stdio.h>
int main()
{
    int i, j, max = 1, e;
    int t [ 26 ] = { 0 } ; 
    char a [ 1000 ] ;
    for (i = 0;i < 1000;i++)
    {
        scanf("%c", &a [ i ] );
        if (a [ i ] == '\n')
            break;
    }
    i = 0;
    while (a [ i ] != '\n')
    {
    if (a [ i ] >= 'A' && a [ i ] <= 'Z')
        t [ a [ i ] - 'A' ] ++;
    if (a [ i ] >= 'a' && a [ i ] <= 'z')
        t [ a [ i ] - 'a' ] ++;
    i++;
    }
    for (j = 0;j <= 25;j++)
    {
        if (t [ j ] > t [ max ] )
            max = j;
    }
    printf("%c %d\n", max + 'a',t [ max ] );
    return 0;
}
