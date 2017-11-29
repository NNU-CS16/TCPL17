#include <stdio.h>
#include <string.h>
int main()
{
	char str[100];
	int k;
	scanf("%s", &str);
	scanf("%d",&k);
	k_reverse(str,k);

	return 0;
}
void k_reverse(char* str, int k)
{
	int len = strlen(str);
	int a, i, j, temp;
	a = len/k;
	if (a == 0)
	printf("%s",str);
	else
	for (a = 1; a <= len/k; a++)
	{
		for (i = a*k -1, j = (a -1)*k; j<=i; i--,j++)
		{
			temp = str[j];
			str[j] = str[i];
			str[i] = temp;
		}
	}
	printf("%s\n",str);
}
