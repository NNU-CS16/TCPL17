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
	int result;
	(n > 0) && (result = sum(n-1) + n);
	return result;
}	
