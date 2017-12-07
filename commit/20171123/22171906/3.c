#include <stdio.h>

int sum(int n)
{
    return n>0?n+sum(n-1):0;
}

int main ()
{
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}

