/*7.c_辗转相除求最大公约数*/
#include <stdio.h>

int GCD_recursive(int m, int n)
{
	int i;
    if (m < n)
    {
        m = m ^ n;
        n = n ^ m;
        m = m ^ n;
    }
    i = m % n;
	if (i == 0)
		return n;
	else
		GCD_recursive(n, i);
}

int GCD_iterative(int m, int n)
{
	int i;
	if (m < n)
	{
		m = m ^ n;
		n = n ^ m;
		m = m ^ n;
	}
	i = m % n;
	while (i != 0)
	{
		m = n;
		n = i;
		i = m % n;
	}
	return n;
}

int main()
{
	int i, m, n, gcd1, gcd2;
	printf("请输入m n：\n");
	scanf("%d%d", &m, &n);
	gcd1 = GCD_iterative(m, n);
	gcd2 = GCD_recursive(m, n);
	printf("最大公约数：%d %d\n", gcd1, gcd2);
	return 0;
}
