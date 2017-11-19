#include <stdio.h>
#include <string.h>

int main()
{
	char a[100000];
	int flag, len, i, sum, m;
	gets(a);
	len = strlen(a);
	
	for (i = 0, sum = 0; i <= len - 1; i++)
	{
		if (a[i] > 64 && a[i] < 91)
			m = a[i] - 64;
		else if (a[i] > 96 && a[i] < 123)
			m = a[i] - 96; 
		else continue;

		sum = sum + m;
	}

	int cnt, j;
	for (cnt = 0, j = 0; sum > 0; )
	{
		if (sum & 1 == 1) cnt++;
		sum = sum >> 1;
		j++;
	}
	printf("%d %d\n", j - cnt, cnt);

	return 0;
}
