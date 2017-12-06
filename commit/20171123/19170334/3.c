#include <stdio.h>//求 1+2+3+…+n.

int sum(int n)
{
	int i = 1;
	(n > 1) && (i = sum(n-1) + n);
	return i;
}

int main()
{
	int n, m;
	scanf("%d", &n);
	m = sum(n);
	printf("%d\n", m);
	return 0;
}
