#include <stdio.h>
#include <string.h>
int count_substr(const char* str, const char* substr);

int main()
{
	char str1[100], str2[100];
	printf("请输入主串:");
	fgets(str1, 100, stdin);
	printf("请输入子串:");
	fgets(str2, 100, stdin);
	printf("%d\n", count_substr(str1, str2));
	return 0;
}

int count_substr(const char* str, const char* substr)
{
	int len1, len2;
	int count = 0, flag = -1;
	int i, j, k;
	len1 = strlen(str);
	len2 = strlen(substr);
	for (i = 0; i <= len1 - len2; ++i)
	{
	  if (str[i] == substr[0])
	  {
		flag = 1;
		for (j = i + 1, k = 1; k < len2 - 1; ++j, ++k)
		{
		  if (str[j] != substr[k])
		  {
			flag = -1;
			break;
		  }
		}
	  }
	  if (flag == 1)
	  {
		count += 1;
		i = i + len2 - 2;
	  }
	}
	return count;
}
