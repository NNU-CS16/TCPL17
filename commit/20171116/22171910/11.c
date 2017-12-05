/*实现个人的strcpy函数*/
#include <stdio.h>
int my_strcpy(char* dest, const char* src);

int main()
{
  char src[1000], dest[1000];
  printf("请输入字符串:");
  gets(src);
  my_strcpy(dest, src);
  return 0;
}

int my_strcpy(char* dest, const char* src)
{
  int i = 0, n = 0, j;
  while (src[i] != '\0')
  {
	dest[i] = src[i];
	i++;
	n++;
  }
  for (j = 0; j <= n + 1; j++)
	  printf("%c", dest[j]);
  printf("\n");
}
