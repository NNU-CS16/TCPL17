#include<stdio.h>
int sum(int n)
{
    int a;
    if(n == 1) return 1;
    a = n + sum(n-1);
    return a;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",sum(n));
    return 0;
}
