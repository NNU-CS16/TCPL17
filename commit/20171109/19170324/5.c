#include <stdio.h>
int A(int n);

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", A(n));

	return 0;
}

int A(int n)
{
	if (n == 1)
		return 2;
	else 
		return 2 * A(n - 1) + 2;
}
