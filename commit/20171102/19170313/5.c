#include <stdio.h>
int fac_bit_count(int n);
int main()
{
    int n, w;
    scanf("%d", &n);
    w = fac_bit_count(n);
    printf("%d\n",w);
    return 0;
}
int fac_bit_count(int n)
{
    int a = 1, i;
    for (i = 1;i <= n;i++)
    {
        a = a * i;
    }  
    int j, m = 0;
    for (j = 0; ; )
    {
        a = a / 10;
        m++;
        if (a == 0)
            break;
    }
    return m;
}
