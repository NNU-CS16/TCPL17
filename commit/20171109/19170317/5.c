#include <stdio.h>
int Hanoi(int n);

int main()
{
	int n, An;
	printf("请输入n的值(1 <= n <= 25):");
	scanf("%d", &n);
	An = Hanoi(n);
	printf("%d\n", An);
	return 0;
}

int Hanoi(int n)
{
	if (n == 1)
	  return 2;
	else
	  return 2 * Hanoi(n - 1) + 2;
}
