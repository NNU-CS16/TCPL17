#include <stdio.h>
#include <string.h>

int substr(const char* str, const char* substr)
{
	int flag1, flag2 = 0, i, k, j;
	int len1, len2;
	len1 = strlen(str);
	len2 = strlen(substr);
	for (i = 0; i <= len1 - 1; ++i)
	{
		flag1 = 0;
		if (str[i] == substr[0])
		{
			for (j = i, k = 0; k <= len2 - 1; ++j, ++k)
				if (str[j] != substr[k])
				{
					flag1 = 1;
					break;
				}
			if (flag1 == 0)
			{
				return i;
				flag2 = 1;
				break;
			}
		}
	}

	if (flag2 == 0)
		return -1;
}

int main()
{
	char str1[] = "I dislike c";
	char str2[] = "love";
	printf("%d\n", substr(str1, str2));

	return 0;
}
	
