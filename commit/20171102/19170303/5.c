#include<stdio.h>
#include<math.h>
int fac_bit_count(int n)
{
    int i;
    double sum=0.0;
    for (i=2; i<=n; i++)
    sum +=log10(i);
    if (n == 1)
        sum = 1;
    return  (int)ceil(sum);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", fac_bit_count(n));
    return 0;
}

