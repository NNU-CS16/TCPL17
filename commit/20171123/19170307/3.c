#include <stdio.h>
int sum(int n);

int main()
{
	int k;
	printf("please input k:");
	scanf("%d", &k);
	printf("%d\n", sum(k));
	return 0;
}

int sum(int n)
{
	int a;
	(n > 0) && (a = sum(n-1) + n);
	return a;
}

