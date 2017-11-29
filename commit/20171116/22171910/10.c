/*实现个人的strlen函数*/
#include <stdio.h>
#include <string.h>
int my_strlen(const char* str);

int main()
{
  char str[1000];
  printf("请输入字符数组:");
  gets(str);
  printf("%d", my_strlen(str));
  return 0;
}

int my_strlen(const char* str)
{
  int i = 0, n = 0;
  while (str[i] != '\0')
  {
	  i++;
	  n++;
  }
  return n;
}
