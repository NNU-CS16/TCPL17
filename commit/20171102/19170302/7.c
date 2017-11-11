#include <stdio.h>
int GCD (int m,int n);

int main()
{
	int m, n;
	scanf("%d%d", &m, &n);
	printf("%d\n", GCD(m,n));
	return 0;
}

int GCD (int m,int n)
{
    return n == 0 ? m : GCD(n, m%n);
}
