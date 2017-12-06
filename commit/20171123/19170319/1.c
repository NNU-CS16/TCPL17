#include <stdio.h>
long long int f(long long int x)
{
    while (1)
    {
        if (x % 2 == 0)
            x /= 2;
        else 
            break;
    }
    return x;
}
int main()
{
    long long int x,sum = 0;
    int i;
    scanf("%lld",&x);
    for (i = 1;i <= x;i++)
    {
        sum += f(i);
    }
    printf("%lld",sum);
    return 0;
}
