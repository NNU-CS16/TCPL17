#include <stdio.h>
#include <stdlib.h>
void print_hex(int a)
{
	char buffer[33];
	sprintf(buffer, "%x", a);
	return (buffer);
}

int main()
{
	int num;
	char * her_str;
	printf("Enter a number:");
	scanf("%d", &num);
	her_str==print_hex(num);
	printf("Hexadecimal number:%sH\n", her_str);
	return 0;
}
