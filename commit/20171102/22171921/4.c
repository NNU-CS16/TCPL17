#include <stdio.h>
#include <string.h>

int count1_in_bin(int n)
{
    int i = 0;
    while(n)
    {
        if (n % 2 == 1)
            i++;
            n = n / 2;
    }
    return i;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", count1_in_bin(n));
    return 0;
}
