#include <stdio.h>
int m = 0;
int sum(int n);
int main()
{
    int n;
    scanf("%d", &n);
    sum(n);
    printf("%d\n", m);
    return 0;
}

int sum(int n)
{
    m = m + n;
    return (n - 1) && sum(n - 1);
}
