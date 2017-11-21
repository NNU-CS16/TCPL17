/*字符统计*/
#include <stdio.h>
#include <string.h>
int main()
{
  char a[1000];
  int i, len, ASC[128] = {0}, m = 0, n;
  gets (a);
  len = strlen(a);
  for (i = 0; i < len; i++)
  {
	if (a[i] >= 'a' && a[i] <= 'z')
	   a[i] = a[i] - 'a' + 'A';
	if (a[i] >= 'A' && a[i] <= 'Z')
	   ASC[a[i] - 'A']++;
  }
  for (i = 0; i < 26; i++)
  {
	if (ASC[i] > m)
	{
	  m = ASC[i];
	  n = i;
	}
  }
  printf("%c %d", n + 'a', m);
  return 0;
}
