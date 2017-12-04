#include <stdio.h>

int sum (int n);
int main()
{
    int n,p;
    scanf("%d",&n);
    p = sum(n);
    printf("%d\n",p);
    return 0;
}
int sum (int n)
{
    if (n == 1)
    return 1;
    else
    return n+sum(n-1);
}
