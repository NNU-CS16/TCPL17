#include <stdio.h>
int sum(int n);

int sum(int n)
{
	int m = 1;
	(n > 1) && (m = sum(n-1) + n);
	return m;
}

int main()
{
	int n;
	printf("input n:");
	scanf("%d", &n);
	printf("%d\n", sum(n));
	return 0;
}
