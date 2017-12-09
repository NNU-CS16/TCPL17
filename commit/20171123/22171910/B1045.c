/*快速排序*/
#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b)
       {return (*(int*)a - *(int*)b);}

int main()
{
  int n, i, j, k, m = 0, a[100001], b[100001];
  scanf("%d", &n);
  for (i = 0; i < n; i++)
      scanf("%d", &a[i]);
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < i; j++)
	if (a[j] > a[i])
	    break;
    if (j == i)                     //与后位数字比较条件
    {
      for (k = i; k < n; k++)
	  if (a[k] < a[i])
	     break;
      if (k == n)                  //将主元记入数组
      {
	b[m] = a[i];
	m++;
      }
    }
  }
  printf("%d\n", m);
  qsort(b, m, sizeof(int), cmp);   //将获取数字排序
  for (i = 0; i < m - 1; i++)
      printf("%d ", b[i]);
  printf("%d", b[m - 1]);
  return 0;
}
