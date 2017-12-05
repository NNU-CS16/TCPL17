#include <stdio.h>

int add(int n1, int n2)
{
	int sum, jin;
	if (n2 == 0)
		return n1;
	sum = n1 ^ n2;
	jin = (n1 & n2) << 1;
	return add(sum, jin);
}

int main()
{
	int n1, n2;
	scanf("%d%d", &n1, &n2);
	printf("%d\n", add(n1, n2));

	return 0;
}
