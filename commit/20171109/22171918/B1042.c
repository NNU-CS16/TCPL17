#include <stdio.h>
int main()
{
	int a[128] = {0};
	char c;
	c = getchar();
	while (c != '\n')
	{
		if (c >= 'A' && c <= 'Z') 
		c += 32;
		a[c]++;
		c = getchar();
	}
	int max, i, j = -1;
	for (i = 'a'; i <= 'z'; i++)
		if (a[i] > j)
		{
			j = a[i];
			max = i;
		}
	printf("%c %d", max, a[max]);
	return 0;
}
