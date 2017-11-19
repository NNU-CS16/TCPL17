#include <stdio.h>

int main() 
{
    int num[40] = {0};
    int A, B, D, n, i;
    scanf("%d%d%d", &A, &B, &D);
    n = A + B;
    if (n == 0) 
    {
        printf("0");
    } 
    else 
    {
        i = 0;
        while(n != 0) 
        {
            num[i ++] = n % D;
            n = n / D;
        }
        for (i = 39; i >= 0 && num[i] == 0; i --);
            for (; i >= 0; i --) 
            {
                printf("%d", num[i]);
            }
    }
    printf("\n");
    return 0;
}                     
