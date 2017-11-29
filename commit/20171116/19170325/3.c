#include <stdio.h>

int binary_search_recursive(int arr[], int left, int right, int query);
int binary_search_iterative(int arr[], int left, int right, int query);

int main(void)
{
   int left, right, query, arr[10] = {1, 2, 3, 4, 6, 7, 8, 9, 10, 11}, temp;

   printf("Please input left, right and query :\n");
   scanf("%d%d%d", &left, &right, &query);
   temp = binary_search_recursive(arr, left, right, query);
   printf("%d\n", temp);
   temp = binary_search_recursive(arr, left, right, query);
   printf("%d\n", temp);

   return 0;
}

int binary_search_recursive(int arr[], int left, int right, int query)
{
   int mid = (left + right) / 2;

   if (arr[mid] > query)
       return binary_search_recursive(arr, left, mid - 1, query);
   else if (arr[mid] < query)
       return binary_search_recursive(arr, mid + 1, right, query);
   else
       return mid;
}

int binary_search_iterative(int arr[], int left, int right, int query)
{
   int i, temp = 0;

   for (i = left; i <= right; i++)
     if (arr[i] == query)
     {
         temp = i;
         break;
     }
   if (temp != 0)
     return temp;
   else
     return -1;
}
