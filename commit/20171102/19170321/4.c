#include <stdio.h>
    int count1_in_bin(int n);
    int main()
    {
        int n;
        scanf ("%d", &n);
        printf ("%d\n", count1_in_bin(n));
         return 0;
     }
    int count1_in_bin(int n)
    {
        int num = 0, x;
        while(1)
        {
            x = n % 2;
            n = n / 2;
            if (x == 1)
                num++;
            if (n == 0)
                break;
         }
        return num;
    }
