#include <stdio.h>
#include <stdlib.h>
void MergeSort(int arr[], int left, int right);
void Merge(int arr[], int left, int right);


int main()
{
   int arr[10]={9,8,7,6,5,4,3,2,1,0};
   MergeSort(arr,0,9);
   int j;
   for ( j = 0; j < 10; j++)
    printf("%d", arr[j]);
    return 0;
}

void MergeSort(int arr[], int left, int right)
{
    int mid = (left+right)/2;
    if(left < right)
    {
      MergeSort(arr, left, mid);
      MergeSort(arr, mid+1, right);
      merge(arr, left, right);
    }
}

void merge(int arr[], int left, int right)
{
    int i, j, k;
    int a[100];
    int mid = (left+right)/2;
    i = left;
    j = mid+1;
    k = left;
    while ( i <= mid && j <= right )
    {
      if ( arr[i] <= arr[j] ) 
	{
       	a[k] = arr[i];
	 k++;
       	i++;
	}
       else 
	{
	   a[k] = arr[j];
        	k++;
		j++;
        }
     }
}

	
  
  
