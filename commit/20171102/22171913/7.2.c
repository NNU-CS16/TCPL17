#include <stdio.h>
int GCD_iterative(int m, int n);
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    printf("%d\n", GCD_iterative(m, n));
    return 0;
}
int GCD_iterative(int m, int n)
{
    int a;
    while (n != 0)
    {
	a = m % n;
	m = n;
	n = a;
    }
    return m;
}
	
