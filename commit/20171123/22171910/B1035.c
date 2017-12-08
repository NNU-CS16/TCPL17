/*插入与归并*/
#include <stdio.h>
#include <stdlib.h>
int cmp(const void* a, const void* b)
	{return *(int*)a - *(int*)b;}

int main()
{
  int n, a[100], b[100], i, j, len;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
      scanf("%d", &a[i]);
  for (i = 0; i < n; i++)
      scanf("%d", &b[i]);
  for (i = 0; i < n -1 && b[i] <= b[i + 1]; i++);
  for (len = ++i; i < n && b[i] == a[i]; i++);
  len = i == n ? len + 1: 0;     //控制下步是否进行
  if (len)
  {
    printf("Insertion Sort\n");
    qsort(a, len, sizeof(int), cmp);
  }
  else
  {
    printf("Merge Sort\n");
    for (len = 1, i = 0; i < n && len <= n; len *= 2)
    {
      for (i = 0; i < n && a[i] == b[i]; i++);
      for (j = 0; j < n / len; j++)
	  qsort(a + j * len, len, sizeof(int), cmp);     //将数组进行排序
          qsort(a + j * len, n % len, sizeof(int), cmp);
    }
  }
  for (i = 0; i < n; i++)
      printf("%d%c", a[i], i == n - 1 ? '\n':' ');   //控制最后一位无空格
  return 0;
}
