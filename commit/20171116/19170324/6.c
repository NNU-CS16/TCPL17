#include <stdio.h>
#include <string.h>

void k_reverse(char* str, int k)
{
	int len, i, m, n, j;
	char temp;
	len = strlen(str);
	for (n = k - 1, i = 0; n + 1 <= len; i += k, n += k)
		for (j = i, m = n; j != m; j++, m--)
		{
			temp = str[j];
			str[j] = str[m];
			str[m] = temp;
		}
	printf("%s\n", str);
}

int main()
{
	char str[20] = {"HelloWorld"};
	int k, len;
	scanf("%d", &k);
	k_reverse(str, k);

	return 0;
}
