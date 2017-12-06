#include <stdio.h>
int sum (int n);
int main()
{
    int n,p;
    scanf("%d",&n);
    p = sum(n);
    printf("%d",p);
    return 0;
}
int sum (int n)
{
    int s = n;
    n&&(s +=sum(n - 1));
    return s;
}

