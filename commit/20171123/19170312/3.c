#include<stdio.h>
int sum(int n)
{
    int t=0;
    n!=0 && (t = sum(n-1)+n);
    return t;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",sum(n));
    return 0;
}
