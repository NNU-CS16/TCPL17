/*数素数*/
#include <stdio.h>
#include <math.h>
int is_prime(int n);

int main()
{
  int m, n, i, b, e = 1, a[1000000];
  scanf("%d%d", &m, &n);
  for (b = 0, i = 0; i <= n + 1; b++)      //计入前n个素数
  {
    if (is_prime(b))
    {
      a[i] = b;
      i++;
    }
  }
  for (i = m + 1; i <= n; i++, e++)
  {
	 printf("%d", a[i]);
	 if (e && e % 10 == 0)
		printf("\n");
	 else printf(" ");
  }
  printf("%d", a[n + 1]);
  return 0;
}

int is_prime(int n)          //判断整数是否为素数
{
  int m;
  for( m = 2; m <= sqrt(n); m++)
  {
    if (n % m == 0)
    return 0;
  }
  return 1;
}
