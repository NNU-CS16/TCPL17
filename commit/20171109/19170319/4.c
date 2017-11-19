#include <stdio.h>
int Fib(int n,int k)
{
    if (n == 1)
        return 1;
    if(n == 2)
        return 2;
    if (n >= 3)
        return Fib(n - 1,k) + Fib(n - k,k);
}
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    printf("%d",Fib(n,k) % 100007);
    return 0;
}
