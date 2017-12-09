#include<stdio.h>
int sum(int n);
int main()
{
    int n;
    scanf("%d",&n);
    int m=sum(n);
    printf("%d",m);

    return 0;
}
sum(n)
{
    n&&(n+=sum(n-1));
    return n;
}

