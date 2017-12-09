#include <stdio.h>
#include <string.h>

int count_substr(const char* str, const char* substr)
{
	int cnt = 0, flag2 = 0, flag1, i, j, k;
	int len1, len2;
	len1 = strlen(str);
	len2 = strlen(substr);
	for (i = 0; i <= len1 - 1;)
	{
		flag1 = 0;
		if (str[i] == substr[0])
		{
			for (j = i, k = 0; k <= len2 - 1; ++j, ++k)
			{
				if (str[j] != str[k])
				{
					flag1 = 1;
					break;
				}
			}
			if (flag1 == 0)
			{
				flag2 = 1;
				cnt++;
				i = i + len2;
			}
			else
				++i;
		}
		else
			++i;
	}
	
	if (flag2 == 0)
		return -1;
	else
		return cnt;
}

int main()
{
	char str[] = "sososos";
	char substr[] ="sos";
	printf("%d\n", count_substr(str, substr));

	return 0;
}
