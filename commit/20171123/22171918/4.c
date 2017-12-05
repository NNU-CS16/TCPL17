#include <stdio.h>
int add(int n1, int n2);
int main()
{
	int n1, n2;
	scanf("%d%d", &n1, &n2);
	printf("%d\n", add(n1, n2));
	return 0;
}
int add(int n1, int n2)
{
	int sum, i;
	while (n2 != 0)
	{
		sum = n1 ^ n2;
		i = (n1 & n2) << 1;
		n1 = sum;
		n2 = i;
	}
	return sum;
}
