#include <stdio.h>
int binary_search_iterative(int arr[], int left, int right, int query);
int binary_search_recursive(int arr[], int left, int right, int query);
int main()
{
    int arr[4];
    int a, b, i, right, left, query;
    printf("请按严格升序输入四个参数：\n");
    for(i = 0; i < 4; i++)
        scanf("%d", &arr[i]);
    left = 0;
    right = 3;
    printf("请输入要查找的参数：\n");
    scanf("%d", &query);
    a = binary_search_iterative(arr, left, right, query);
    b = binary_search_recursive(arr, left, right, query);

    printf("循环（迭代）版本:\n");
    if(a == -1)
      printf("没有这样的数字。\n");
    else
      printf("要查询的数字在第%d个位置。\n", a + 1);

    printf("递归版本:\n");
    if(b == -1)
      printf("没有这样的数字。\n");
    else
      printf("要查询的数字在第%d个位置。\n", b + 1);

    return 0;
}
int binary_search_iterative(int arr[], int left, int right, int query)
{
    int flag = -1, mid;
    while(left <= right)
    {
          mid = (right + left)/2;
          if(query == arr[mid])
          {
             flag = mid;
             break;
          }
          if(query > arr[mid])
             left = mid + 1;
          else
             right = mid - 1;
    }

    return flag;
}
int binary_search_recursive(int arr[], int left, int right, int query)
{
    int flag = -1, mid;
    mid = (right + left)/2;
    if(query == arr[mid]) 
    {
       flag = mid;
       return flag;
    }
    if(query > arr[mid])
       left = mid + 1;
    else
       right = mid - 1;
    if(left <= right)
      flag = binary_search_iterative(arr, left, right, query);
    else
      return flag;
}

