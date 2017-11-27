#include <stdio.h>
int main()
{
  int i, m, n, p, q, sum = 0;
  int a[100000] = {0}, b[100000] = {0}, c[100000] = {0};
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    scanf("%d%d", &p, &q);
    a[p] = q;
    a[q] = p;
  }
  scanf("%d", &m);
  for (i = 0; i < m; i++)
  {
    scanf("%d", &b[i]);
    c[b[i]] = 1;
  }
  for (i = 0; i < m; i++)
    if (a[b[i]] == 0 || a[b[i]] != 0 && c[b[i]] != 0 && c[a[b[i]]] == 0)
      sum++;
    else
    {
      c[b[i]] = 0;
      c[a[b[i]]] = 0;
    }
  printf("%d\n", sum);
  for (i = 0; i < 100000; i++)
    if (c[i] != 0)
    {
      if (sum > 1)
        printf("%05d ", i);
      else
      {
        printf("%05d\n", i);
        break;
      }
      sum--;
    }
  return 0;
}
