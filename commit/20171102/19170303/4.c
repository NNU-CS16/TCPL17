#include<stdio.h>
int count1_in_bin(int n)
{
    int i = 0;
    int m = 0;
    while (n > 0)
    {
    m=n % 2;
    n=(n-m)/2;
    if (m == 1)
        i++;
    }
    return i;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",count1_in_bin(n));
    return 0;
}
