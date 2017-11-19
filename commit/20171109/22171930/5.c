#include <stdio.h>
int Hanoi(int n);
int main()
{
    int n,m;
    scanf("%d", &n);
    m = Hanoi(n);
    printf("%d", m);
    return 0;
}
int Hanoi(int n)
{
    if (n == 1)
    return 2;
    else 
    return 2 * Hanoi(n - 1) + Hanoi(1);
}
