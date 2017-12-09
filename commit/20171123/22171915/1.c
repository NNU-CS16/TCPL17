#include <stdio.h>
int f(int i);

int f(int n)
{
	if (n%2 == 1)
		return n;
	else
		return f(n/2);
}

int main()
{
	int N, i,sum = 0;
	printf("input N:");
	scanf("%d", &N);
	for (i = 1; i <= N; i++)
	{
		sum = sum + f(i);
	}
	printf("%d\n", sum);
	return 0;
}
