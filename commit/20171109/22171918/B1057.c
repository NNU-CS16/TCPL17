#include <stdio.h>
int main ()
{
	int sum = 0;
	char c;
	c = getchar();
	while (c != '\n')
	{
		if (c >= 'a' && c <= 'z')
			sum += c - 96;
		if (c >= 'A' && c <= 'Z')
			sum += c - 64;
		c = getchar();
	}
	int a[2] = {0,0}; 
	int j;
	while (sum)
	{
		j = sum % 2;
		a[j]++;
		sum >>= 1;
 	}
	printf("%d %d\n", a[0], a[1]);
	return 0;
}
		
