#include <stdio.h>
int sum(int n)
{
	int k = 1;
	(n > 1) && (k = n + sum(n - 1));
	return k;
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",sum(n));
	return 0;
}


