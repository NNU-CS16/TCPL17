/*数字黑洞*/
#include <stdio.h>
int sub(int n);

int main()
{
  int m, n, i, b = 0;
  scanf("%d", &n);
  while (b = 0 || n != 6174)
  {
	n = sub(n);
  }
}	

int sub(int n)
{
  int b, i, j, m, k, x, y, a[5];
  for (i = 1; i <= 4; i++)
  {
    m = n % 10;
    n = n / 10;
    a[i] = m;
  }
  if (a[1] == a[2] && a[2] == a[3]
       && a[3] == a[4])
     printf("%d - %d = 0000", n, n);
  for (i = 1; i <= 4; i++)
	  for (j = 0; j <= 4 - i; j++)
		  if (a[j] > a[j + 1])
		  {
			k = a[j];
			a[j] = a[j + 1];
			a[j + 1] = k;
		  }
  x = a[4] * 1000 + a[3] * 100 + a[2] * 10 + a[1];
  y = a[1] * 1000 + a[2] * 100 + a[3] * 10 + a[4];
  printf("%04d - %04d = %04d\n", x, y, x - y);
  return x - y;
}
