#include <stdio.h>
void InsertionSort(int arr[], int left, int right);

int main()
{
   int arr[10];
   for (int i = 0; i < 10; i++)
   scanf("%d",&arr[i]);
   int left,right;
   scanf("%d%d",&left,&right);
   InsertionSort(arr,left,right);
   return 0;
}
void InsertionSort(int arr[], int left, int right)
{
   int i,j;
   int temp;
   for (i = left + 1; i <= right; i++)
   {
	temp = arr[i];
	j = i - 1;
	while ((j >= 0)&&(arr[j] > temp))
	{
	    arr[j+1] = arr[j];
	    j--;
	}
	if (j!=i-1)
	{
	    arr[j+1] = temp;
	}
   }
     for (i = left; i <= right; i++)
     printf("%d",arr[i]);
} 
