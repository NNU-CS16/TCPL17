#include <stdio.h>

int add(int n)
{
	int sum;
	(n > 0) && (sum = n + add(n - 1));

	return sum;
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", add(n));

	return 0;
}
