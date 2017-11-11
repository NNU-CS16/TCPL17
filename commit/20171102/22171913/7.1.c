#include <stdio.h>
int GCD_recursive(int m, int n);
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    printf("%d\n", GCD_recursive(m, n));
    return 0;
}
int GCD_recursive(int m, int n)
{
    return n == 0 ? m : GCD_recursive(n, m % n);
}
