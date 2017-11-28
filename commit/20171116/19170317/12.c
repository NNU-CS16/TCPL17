#include <stdio.h>
int my_strcmp(const char* str1, const char* str2);

int main()
{
	char str1[100], str2[100];
	int flag;
	printf("输入两个字符串:\n");
	gets(str1);
	gets(str2);
	flag = my_strcmp(str1, str2);
	printf("%d\n", flag);
	return 0;
}

int my_strcmp(const char* str1, const char* str2)
{
	int i = 0;
	int flag;
	while (*(str1 + i) != '\0' && *(str2 + i) != '\0')
	{
	  if (str1[i] == str2[i])
		flag = 0;
	  else if (str1[i] < str2[i])
	  {
		flag = -1;
		break;
	  }
	  else if (str1[i] > str2[i])
	  {
		flag = 1;
		break;
	  }
	  i += 1;
	}
	if (*(str1 + i) == '\0' && *(str2 + i) != '\0')
	  flag = -1;
	if (*(str1 + i) != '\0' && *(str2 + i) == '\0')
	  flag = 1;
	return flag;
}
