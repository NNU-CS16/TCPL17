 #include <stdio.h>

 int binary_search_recursive(int arr[], int left, int right, int query)
 {
  int i;
  for (i = left; i <= right; ++i)
  {
     if (query == arr[i])
         printf("arr[%d]", i);
     else
         return binary_search_recursive(arr, left, right, query);
         printf("-1");
  } 
 }

 int binary_search_iterative(int arr[], int left, int right, int query)
 {
  int mid, flag = 0;
  while (left <= right)
  {
      mid = (left + right) / 2;
      if (query == arr[mid])
      {
	  flag = 1;
          break;
      }
      if (query > arr[mid])
	  left = mid + 1;
      else
	  right = mid - 1;
  }
  if(flag == 1)
     printf("arr[%d]", mid);
  else
     printf("-1");
 }

 int main()
 {
  int arr[10];
  int left, right, i, query;
  printf("请按照递增顺序输入数组：\n");
  for (i = 0; i <10; ++i) 
    scanf ("%d",&arr[i]);
  printf("输入要查询的数据：\n");
  scanf("%d",&query);
  binary_search_iterative(arr, left, right, query);
  binary_search_recursive(arr, left, right, query);
  return 0;
 }
