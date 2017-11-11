#include <stdio.h>
int fac_bit_count(int n);

int main()
{
    int n, digit;
    printf("请输入整数n的值:");
    scanf("%d", &n);
    digit = fac_bit_count(n);
    printf("%d\n", digit);
    return 0;
}

int fac_bit_count(int n)
{
    double fac = n;
    int i;
    while (n > 1)
    {
      --n;
      fac = fac*n;
    }
    for (i = 1; fac > 10; ++i)
      fac = fac / 10;
    return i;
}
