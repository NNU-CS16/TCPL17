/*高精度加法*/
#include <stdio.h>
#include <string.h>
int main()
{
  char a[1000], b[1000];
  int s[1000];
  int i, j, k, m, n, p, q = 0;
  printf("请输入数字a:");
  gets(a);
  printf("请输入数字b:");
  gets(b);
  m = strlen(a);
  n = strlen(b);
  for (i = m - 1, j = n - 1, k = 0; i >= 0 && j >= 0;
	   i--, j--, k++)
  {
	p = (a[i] - '0') + (b[j] - '0') + q;
	q = p / 10;
	s[k] = p % 10;
  }
  while (i >= 0)
  {
	p = (a[i] - '0') + q;
	q = p / 10;
	s[k++] = p % 10;
	i--;
  }
  while (j >= 0)
  {
	p = (b[j] - '0') + q;
	q = p / 10;
	s[k++] = p % 10;
	j--;
  }
  if (q != 0)
	 s[k++] = q;
  for (i = k - 1; i >= 0; i--)
	  printf("%d", s[i]);
  return 0;
}
