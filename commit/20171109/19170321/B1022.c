#include <stdio.h>
    int main()
    {
        int  A, B, D, n;
        int i = 0, count = 0;
        int a[1000];
        scanf("%d%d%d",&A,&B,&D);
        n = A + B;
        while(1)
        {
            i++;
            a[i] = n % D;
            n = n / D;
            count++;
            if (n == 0)
                break;
        }
        for (i = count - 1; i >= 0; i--)
        printf("%d",a[i]);
        printf("\n");
        return 0;
    } 
