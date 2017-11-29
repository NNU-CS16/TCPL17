#include <stdio.h>/*每三个字符反转*/
#include <string.h>

void k_reverse(char* str, int k);

int main()
{
	char str[100];
	int k = 3;
	int i;
	scanf("%s", str);
	k_reverse(str, k);
	return 0;
}

void k_reverse(char* str, int k)
{
	int i;
	int temp;
	int len = strlen(str);
	for(i = 0; k * (i + 1) <= len; i++)
	{
		temp = str[k * i];
		str[k * i] = str[k * i + 2];
		str[k * i + 2] = temp;
	}
	printf("%s\n",str);
}
