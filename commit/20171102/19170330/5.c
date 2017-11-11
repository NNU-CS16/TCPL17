#include <stdio.h>
int fac_bit_count(int n)
{
        int i, num=1, p=0;
        for (i=1; i<=n; i++)
        num = num * i;
        scanf("%d", &num);
        while(num)
        {
            p++;
            num/=10;
        }
    return p;
}

int main ()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", fac_bit_count(n));
    return 0;
}
