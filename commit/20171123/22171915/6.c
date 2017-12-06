#include <stdio.h>
#include <string.h>
int count_substr(const char *str, const char *substr)
{
	int count = 0;
	int len1 = strlen(str), len2 = strlen(substr);
	while (strlen(str) >= len2)
	{
		if (strncmp(str, substr, len2) == 0)
		{
			count++;
			str = str + len2;
		}
		else
			str = str + 1;
	}
	return count;
}
 
int main()
{
	char str[20], substr[10];
	printf("input str:");
	scanf("%s", str);
	printf("input substr:");
	scanf("%s", substr);
	int k = count_substr(str, substr);
	printf("%d\n", k);
	return 0;
}
