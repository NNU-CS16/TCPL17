#include <stdio.h>
int is_sorted(int arr[], int left, int right);

int main()
{
   int arr[100];
   int left, right, j;
   scanf("%d %d", &left, &right);
   for (j = 0; j < right; j++)
        scanf("%d", &arr[j]);
   printf("%d\n", is_sorted(arr, left, right));
   return 0;
}

int is_sorted(int arr[], int left, int right)
{
   int i;
   for (i = left; i <= right; i++)
   {
        if (arr[i] > arr[i+1])
            break;
   }
   if (i < right)
   return -1;
   else return 1;
}
