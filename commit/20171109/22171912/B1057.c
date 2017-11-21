/*B1057.c_数0、1*/
#include <stdio.h>
#include <string.h>

int main()
{
	int c0 = 0, c1 = 0;
	int len, sum, i;
	char str[100000];
	gets(str);
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			sum += str[i] - 'A' + 1;
		if (str[i] <= 'z' && str[i] >= 'a')
			sum += str[i] - 'a' + 1;
	}
	while(sum != 0)
	{
		if (sum % 2 == 0)
			c0++;
		if (sum % 2 == 1)
			c1++;
		sum /= 2;
	}
	printf("%d %d\n", c0, c1);
	return 0;
}
