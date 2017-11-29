#include <stdio.h>
int binary_search_iterative(int arr[], int left, int right, int query);
int binary_search_recursive(int arr[], int left, int right, int query);

int main ()
{
   int arr[10];
   int left, right, query;
   int i , res_i , res_r;

   printf ("请输入数据：");
   for (i = 0; i <= 9; i++)
     scanf ("%d" , &arr[i]);

   printf ("输入区间：");
   scanf ("%d%d" , &left , &right);

   printf ("输入要查找的数据：");
   scanf ("%d" , &query);

   res_i = binary_search_iterative(arr , left , right , query);
   res_r = binary_search_recursive(arr , left , right , query);

   printf ("%d%d\n" , res_i , res_r);
   return 0;

}


int binary_search_iterative(int arr[], int left, int right, int query)
{
    int low = left , high = right , mid;
    int flag = 0;


    while (low <= high)
    {
        mid = (low + high) / 2;
        if (query == arr[mid])
        {
            flag = 1;
            break;
        }
        if (arr[mid] > query)
            high = mid - 1;
        if (arr[mid] < query)
            low = mid + 1;
    }

    if (flag == 1)
      return mid;
    else
        return -1;
}

int binary_search_recursive(int arr[], int left, int right, int query)
{
    int low = left , high = right , mid;
    int flag = 0;

    mid = (low + high) / 2;
    if (query == arr[mid])
        flag = 1;
    if (arr[mid] > query)
        binary_search_recursive(arr , low , mid - 1 , query);
    else
        binary_search_recursive(arr , mid + 1 , high , query);


    if (flag == 1)
    return mid;
    else
    return -1;
}
