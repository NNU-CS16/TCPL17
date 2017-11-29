#include <stdio.h>
#include <string.h>
void k_reverse(char* str, int k);
int main()
{
	char str[1000];
	int k;
	scanf("%s %d", str, &k);
	k_reverse(str, k);
	printf("%s\n", str);
	return 0;
}
void k_reverse(char* str, int k)
{
	int len = strlen(str);
	int i, j ,temp;
	int a = 0, b = k;
	while (b <= len)
	{
		for (i = a, j = b - 1; i < b, j > i; i++, j--)
		{
			temp = str[i];
			str[i] = str[j];
			str[j] = temp;
		}
		a += k;
		b += k;
	}
}
