 #include <stdio.h>

 int main()
 {
  int a = 0, i, j, n, m, arr[40000];
  printf("请输入n:");
  scanf("%d", &n);
  printf("请输入数组:");
  for(i = 0; i < n; ++i)
      scanf("%d", &arr[i]);
  for (j = 0; j < n; ++j)
  {
       for(m = j + 1; m < n; ++m)
       {
        if (arr[j] > arr[m] && j < m)
	{
	 ++a;
        }
	if(arr[j] < arr[m])
	{
        m = m;
	}
       }
  }
  printf("%d\n", a);
  return 0;
 }
