#include<stdio.h>
long int f(long int n)
{
    if(n==1) return 1;
    else if(n==2) return 2;
    else
    return f(n-1)+f(n-2);
}
int main()
{
    long int n;
    long int a;
    scanf("%ld",&n);
    a=f(n)%100007;
    printf("%ld\n",a);
    return 0;
}
