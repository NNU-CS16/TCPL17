#include <stdio.h>
void BubbleSort(int arr[], int left, int right);

int main()
{
   int i, left, right, arr[100];
   scanf("%d%d", &left, &right);
   for (i = left; i <= right; i++)
   {
     scanf("%d", &arr[i]);
     BubbleSort(arr, left, right);
   }
   return 0;
}

void BubbleSort(int arr[],int left,int right)
{
   int j, k, temp;
   for ( j=0; j<right-left; j++)
    for (k=0; k<right-left-j; k++)
     if (arr[k]>arr[k+1])
     {
       temp = arr[k];
       arr[k] = arr[k+1];
       arr[k+1] = temp;
     }
}
