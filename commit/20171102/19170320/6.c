#include <stdio.h>
int is_prime(int n);
int is_prime(int n)
{
    int a,b;
    for (a=2; a=n-1; a++)
    {
        if (n%a==0)
        b=1;
        break;
    }
    return 1;
}
int main()
{
    int n=1,i=1;
    while (i<=1000)
    {
        if (is_prime(n)==1)
        i++;
        if (i>=100)
        printf("%d ",n);
    }
    return 0;
}
