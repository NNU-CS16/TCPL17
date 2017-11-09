#include <stdio.h>
#include <math.h>
void print_hex(int n)
{
	int r;
	r = n%16;
	if (n >= 16)
		print_hex(n / 16);
	putchar('0' + r);
}
int main()
{
	int n;
	printf("Input one figure:");
	while(scanf("%d", &n)==1)
	{
		print_hex(n);
		printf("\n Input one figure.");	
		printf("Or input quit to quit:");
	}
	printf("Over!\n");
	return 0;
}
