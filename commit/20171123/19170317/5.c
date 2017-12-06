#include <stdio.h>
#include <string.h>
int substr(const char* str, const char* substr);

int main()
{
	char str1[100], str2[100];
	printf("请输入主串:");
	fgets(str1, 100, stdin);
	printf("请输入子串:");
	fgets(str2, 100, stdin);
	printf("%d\n", substr(str1, str2));
	return 0;
}

int substr(const char* str, const char* substr)
{
	int len1, len2;
	int i, j, k;
	int flag = -1;
	len1 = strlen(str);
	len2 = strlen(substr);
	for (i = 0; i <= len1 - len2; ++i)
	{
	  if (str[i] == substr[0])
	  {
		flag = i;
		for (j = i+1, k = 1; k < len2-1; ++j, ++k)
		{
		  if (str[j] != substr[k])
		  {
			flag = -1;
			break;
		  }
		}
	  }
	  if (flag != -1)
		break;
	}
	return flag;
}
