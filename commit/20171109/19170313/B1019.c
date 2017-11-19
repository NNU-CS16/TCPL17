#include <stdio.h>
#include <math.h>
int main()
{
    int a, b [ 32 ] , c [ 32 ] , i, d, e, dz, dj, g, h = 0, k;
    scanf("%d", &a);
    for (h = 0; ;h++)
    {
        for (i = 0;i < 4;i++)
        {
             d = a % 10;
             b [ i ] = d;
             a = a / 10;
        }
        if (b [ 0 ] == b [ 1 ] && b [ 1 ] == b [ 2 ] && b [ 2 ] == b [ 3 ] )
        {
            printf("N - N = 0000\n");
            break;
        }
        for (i = 0;i < 3;i++)
        {
            for (d = 0;d < 3 - i;d++)
            {
                if (b [ d ] < b [ d + 1 ] )
                {
                    e =b [ d ] ;
                    b [ d ] = b [ d + 1 ] ;
                    b [d + 1 ] = e;
                }
            }
        }
        dz = 0, dj = 0;
        for (i = 0;i < 4;i++)
        {
            g = pow(10, i);
            dz = dz + b [ i ] * g;
        }
        for (i = 0;i < 4;i++)
        {
            g = pow(10, 3 - i);
            dj = dj + b [ i ] * g;
        }
        k = dj - dz;
        printf("%d - %04d = %d\n", dj, dz, k);
        if (k == 6174)
            break;
        if (k != 6174)
            a = k;
    }
    return 0;
}
