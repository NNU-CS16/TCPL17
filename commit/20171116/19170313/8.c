#include <stdio.h>
int dg(int a [ 20 ] [ 20 ], int n, int i, int j, int k);
int main()
{
    int n, i = 0, j = 0, k, a [ 20 ] [ 20 ] ;
    printf("N<=20\n");
    scanf("%d", &n);
    k = n;
    dg(a, n, i, j, k);
    return 0;
}
int dg(int a [ 20 ] [ 20 ] , int n, int i, int j, int k)
{
    a [ 0 ] [ 0 ] = 1;
    if (n == 1 && i == 0)
        printf("%d\n", a [ 0 ] [ 0 ] );
    int x = 0, temp, p, q, b = i, c = j;
    for (x = 0;x < n - 1;x++)
    {
        temp = a [ b ] [ c ] ;
        temp++;
        a [ b ] [ c + 1 ] = temp;
        c++;
    }
    for (x = 0;x < n - 1;x++)
    {
        temp = a [ b ] [ c ] ;
        temp++;
        a [ b + 1 ] [ c ] = temp;
        b++;
    }
    for (x = 0;x < n - 1;x++)
    {
        temp = a [ b ] [ c ] ;
        temp++;
        a [ b ] [ c - 1 ] = temp;
        c--;
    }
    if (n > 2)
    {
        for (x = 0;x < n - 2;x++)
        {
            temp = a [ b ] [ c ] ;
            temp++;
            a [ b - 1 ] [ c ] = temp;
            b--;
        }
    }
    if (n == 1 && i != 0)
    {
        temp = a [ b ] [ c - 1 ] ;
        temp++;
        a [ b ] [ c ] = temp;
        for (p = 0;p < k;p++)
        {
            for (q = 0;q < k;q++)
                printf("%4d", a [ p ] [ q ] );
            printf("\n");
        }
        return 0;
    }
    if (n == 2)
    {
        for (p = 0;p < k;p++)
        {
            for (q = 0;q < k;q++)
                printf("%4d", a [ p ] [ q ] );
            printf("\n");
        }
        return 0;
    }
    if (n > 2)
    {
        temp = a [ b ] [ c ] ;
        temp++;
        a [ b ] [ c + 1 ] = temp;
        dg(a, n - 2, i + 1, j + 1, k);
    }
}
