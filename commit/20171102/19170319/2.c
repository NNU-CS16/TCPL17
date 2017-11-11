#include <stdio.h>
void print_hex(int a)
{
	printf("%x",a);
}
int main()
{
	int a;
	scanf("%d",&a);
	print_hex(a);
	return 0;
}
