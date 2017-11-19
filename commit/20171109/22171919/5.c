#include <stdio.h>
int A(int n);

int main()
{
	int n, m;
	printf("1 <= n <= 25\n");
	scanf("%d", &n);
	m = A(n);
	printf("%d\n", m);
	return 0;
}
int A(int n)
{
	if (n == 1)
		return 2;
	if (n == 2)
		return 6;
	if (n >= 3)
		return 2 * A(n - 1) + 2;
}
