#include <stdio.h>
int LCM(int m, int n);
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    LCM(m, n);
    return 0;
}
int LCM(int m, int n)
{
    int a, b, p, q, x;
    p = m;
    q = n;
    while (q > 0)
    {
	x = p % q;
	p = q;
	q = x;
    }
    printf("m与n的最大公约数=%d\n", p);
    printf("m与n的最小公倍数=%d\n", m * n / p);
}
	
