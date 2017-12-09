#include<stdio.h>
int m;
int sum(int n);
int main()
{
    int n;
    printf("Please input n:\n");
    scanf("%d", &n);
    sum(n);
    printf("%d\n", m);
    return 0;
}

int sum(int n)
{
    m += n;
    return (n-1) && sum(n-1);
}
