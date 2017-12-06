#include <stdio.h>
#include<string.h>
int substr(const char* Str, const char* Substr)
{
int len1 = strlen(Str);
int len2 = strlen(Substr);
int i, j;
if (len1 < len2)
	return -1;
else
{
	for (i = 0; i <= len1 - len2; i++)
	{
		if (Str[i] == Substr[0])
			break;
	}
	int j = 1, m = i;
	while (j <= len2 - 1)
	{
		if (Str[i+1] != Substr[j])
		{
			i = -2;
			break;
		}
		else
			i++,j++;
	}
	return m;
}
}

int main()
{
	int k;
	char Str[50];
	printf("input Str:");
	scanf("%s", Str);
	char Substr[10];
	printf("input Substr:");
	scanf("%s", Substr);
	k = substr(Str, Substr);
	printf("%d\n", k);
	return 0;
}
