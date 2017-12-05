#include <stdio.h>

int sum(int n)
{
	int Sum=n;
	n&&(Sum+=sum(n-1));
	return Sum;
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",sum(n));
	return 0;
}
