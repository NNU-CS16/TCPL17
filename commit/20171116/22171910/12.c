/*实现个人的strcmp函数*/
#include <stdio.h>
int my_strcmp(const char* str1, const char* str2);

int main()
{
  char str1[1000], str2[1000];
  printf("请输入字符串1:");
  gets(str1);
  printf("请输入字符串2:");
  gets(str2);
  printf("%d", my_strcmp(str1, str2));
  return 0;
}

int my_strcmp(const char* str1, const char* str2)
{
  int i, m, n;
  for (i = 0; ; i++)
  {
	if (str1[i] < str2[i])
	{
	  return -1;
	  break;
	}
	else if (str1[i] > str2[i])
	{
	  return 1;
	  break;
	}
	else if (str1[i] == '\0' || str2[i] == '\0')
	{
	  return 0;
	  break;
	}
  }
}
