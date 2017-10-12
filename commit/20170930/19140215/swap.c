#include <stdio.h>

int main()
{
	int a, b;
	int temp;	
	scanf("%d%d", &a, &b);

	printf("a = %d, b = %d\n", a, b);
	
	temp = a;
	a = b;
	b = temp;

	printf("a = %d, b = %d\n", a, b);
	
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("a = %d, b = %d\n", a, b);
	return 0;
}
