/*实现qsort函数*/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int compare_ints(const void* a, const void* b);

int main()
{
  int ints[ ] = {-2, 99, 0, -743, 2, INT_MIN, 4};
  int size = sizeof ints / sizeof *ints;
  int i;
  qsort(ints, size, sizeof(int), compare_ints);
  for (i = 0; i < size; i++)
      printf("%d ", ints[i]);
  printf("\n");
}

int compare_ints(const void* a, const void* b)
{
  int arg1 = *(const int*)a;
  int arg2 = *(const int*)b;
  if (arg1 < arg2)
     return -1;
  else if (arg1 > arg2)
     return 1;
  else
     return 0;
}
