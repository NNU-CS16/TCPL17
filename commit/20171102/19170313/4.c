#include <stdio.h>
int count1_in_bin(int n);
int main()
{
    int n, j;
    scanf("%d", &n);
    j = count1_in_bin(n);
    printf("%d\n",j);
    return 0;
}
int count1_in_bin(int n)
{
    int i = 0, m = 0, a;
    while (n)
    {
        a = n % 2;
        n = n / 2;
        if (a == 1)
            m++;
    }
    return m;
}  
