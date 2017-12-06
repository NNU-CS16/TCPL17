/*部分字符反转*/
#include <stdio.h>
#include <string.h>
void k_reverse(char* str, int k);

int main()
{
  char* str;
  int k;
  printf("请输入字符串:");
  gets(str);
  printf("请输入反转位数k:");
  scanf("%d", &k);
  k_reverse(str, k);
  return 0;
}

void k_reverse(char* str, int k)
{
  int i, j, m, n, len;
  len = strlen(str);
  n = len % k;
  for (i = 0; i <= len - n - k; i = i + k)
	  for (j = k - 1; j >= 0; j--)
		  printf("%c", str[i + j]);
  for (m = 0; m < n; m++)
	  printf("%c", str[len - n + m]);
	  printf("\n");
}
