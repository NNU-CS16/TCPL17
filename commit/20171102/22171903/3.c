#include <stdio.h>

int i;
int is_pow2(int n);
int main()
{
    int n;
    scanf("%d", &n);
    i = is_pow2(n);
    if (i == 0)
        printf("0\n");
    else
        printf("-1\n");

    return 0;
}

int is_pow2(int n)
{
    int m, j;
    i = 1;
    for (j = 0; j < 16; j++)
    {
        m = n % 2;
        n = n>>1;
        if (m == 1)
            i--;
    }
    return i;
}
