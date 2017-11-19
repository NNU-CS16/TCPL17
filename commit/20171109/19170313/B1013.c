#include <stdio.h>
int main()
{
    int a [ 10000 ] , e [ 10000 ] , b = 2, m, n, c = 2, d, i = 0, j;
    printf("m <= n <= 10000\n");
    scanf("%d%d", &m, &n);
    j = m;
    for (i = 0;i <= 10000; )
    {
        if (b == 2 || b == 3)
        {
            a [ i ] = b;
	    b++;
            i++;
	}
        if (b >= 4)
        {
	    for (c = 2;c <= b / 2; )
            {
	        d = b % c;
                if (d == 0)
                {
                    b++;
                    c = 2;
                }
                if (d != 0)
                    c++;
            }
        }
        a [ i ] = b;
        i++;
        b++;
        if (i == 100)
            break;
    }
        for ( ;m <= n; )
        {
            e [ m ] = a [ m - 1 ] ;
            printf("%d ", e [ m ] );
            if (m == j + 9)
            {
                j = j + 10;
                printf("\n");
            }
            m++;
        }
    printf("\n");
    return 0;
}
