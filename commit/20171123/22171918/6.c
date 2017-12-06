#include <stdio.h>
#include <string.h>
int count_Substr(const char* str, const char* substr);
int main()
{
	char str[100], substr[100];
	scanf("%s%s", str, substr);
	printf("%d\n", count_Substr(str, substr));
	return 0;
}
int count_Substr(const char* str, const char* substr)
{
	int len1 = strlen(str);
	int len2 = strlen(substr);
	int sum = 0, i;
	for (i = 0; i < len1 - len2 + 1; i++)
	{
		if (strncmp(str + i, substr, len2) == 0)
 		{	
			sum++;
			i += len2 - 1;
		}
	}
	return sum;
} 

