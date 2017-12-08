/*完美数列*/
#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b)
       {return *(int*)a - *(int*)b;}

int main()
{
  int m = 0, n, p, i, j, k, s[100000];
  scanf("%d%d", &n, &p);
  for (i = 0; i < n; i++)
      scanf("%d", &s[i]);
  qsort(s, n, sizeof(int), cmp);     //给数组排序
  for (i = 0; i < n; i++)
  {
    for (j = i + m; j < n; j++)
    {
      if (s[j] <= s[i] * p)         //更新最大值条件
      {
	k = j - i + 1;
	if (k > m)
	   m = k;                   //记录最大值
      }
      else
	break;
    }
  }
  printf("%d", m);
  return 0;
}
