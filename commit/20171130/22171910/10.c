/*求数组逆序对对数*/
#include <stdio.h>
int main()
{
  int i, j, k = 0, n, arr[40000];
  scanf("%d", &n);
  for (i = 0; i < n; i++)
      scanf("%d", &arr[i]);
  for (i = 0; i < n; i++)
      for (j = i; j < n; j++)
	  if (arr[i] > arr[j] && i < j)
	     k++;
  printf("%d", k);
}
