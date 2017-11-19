#include <stdio.h>
int Step(int n);
int main()
{
    int n,m;
    scanf("%d", &n);
    m = Step(n) % 100007;
    printf("%d\n", m);
    return 0;
}
int Step(int n)
{
    if(n == 1 || n==2)
    return 1;
    else return Step(n - 1) + Step(n - 2);
}
