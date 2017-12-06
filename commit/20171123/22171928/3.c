#include<stdio.h>
int sum(int n)
{
    int i=1;
    (n>1)&&(i=func1(n-1)+n);
    return i;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}
