#include <stdio.h>
int Hanoi(int n);
int main ()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", Hanoi(n));
	return 0;
}
int Hanoi(int n)
{
	if( 1 == n)
	return 2;
	else
	return 2 * Hanoi(n - 1) + 2;
}

