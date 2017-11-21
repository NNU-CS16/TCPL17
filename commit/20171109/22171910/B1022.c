/*D进制的A+B*/
#include <stdio.h>
int main()
{
  int a, b, d, m, k, i, s[10000];
  scanf("%d%d%d", &a, &b, &d);
  k = a + b;
  if (k == 0)
    printf("0");
  while (k != 0)
  {
    m = k % d;
    s[i] = m;
    i++;
    k = k / d;
  }
  i--;
  for ( ; i >= 0; i--)
      printf("%d", s[i]);
  printf("\n");
  return 0;
}
