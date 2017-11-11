#include <stdio.h>
    #include <math.h>
    int fac_bit_count(int n);
    int main()
    {
         int n;
         scanf("%d", &n);
         printf("%d\n", fac_bit_count(n));
         return 0;
     }
    int fac_bit_count(int n)
    {
        double count = 0;
        int i;
        for (i = 1; i <= n; i++)
        count = count + log10(i);
        return (int)count + 1;
    }
