#include <stdio.h>
int get(int x, int y, int lt, int n)
{
    if(x == 0)
        return lt+y;
    else if(y == 0)
        return lt+4*(n-1)-x;
    else if(y == n-1)
        return lt+n+x-1;
    else if(x == n-1)
        return lt+3*(n-1)-y;
    else
        return get(x-1, y-1, lt+4*(n-1), n-2);
}
int main(void)
{
    int n, i, j;
    scanf("%d", &n);
    for(i = 0; i < n; ++i) {
        for(j = 0; j < n; ++j)
            printf("%2d ", get(i, j, 1, n));
        putchar('\n');
    }
    return 0;
}
