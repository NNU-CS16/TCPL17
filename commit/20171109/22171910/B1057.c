/*数零壹*/
#include <stdio.h>
#include <string.h>
int main()
{
  char a[1000];
  int b = 0, c = 0, i, n = 0, len, ASC[128] = {0};
  gets (a);
  len = strlen(a);
  for (i = 0; i < len; i++)
  {
	if (a[i] >= 'a' && a[i] <= 'z')
	   n = n + a[i] - 'a' + 1;
	else if (a[i] >= 'A' && a[i] <= 'Z')
	   n = n + a[i] - 'A' + 1;
  }
  while (n > 0)
  {
	if (n % 2 == 0)
	   b++;
	else
	   c++;
	n = n / 2;
  }
  printf("%d %d", b, c);
  return 0;
}
