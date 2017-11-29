#include <stdio.h>
void SelectionSort(int arr[], int left, int right);

int main()
{
    int arr[10];
    int left,right,i = 0;
    for (; i < 10; i++)
	scanf("%d",&arr[i]);
    scanf("%d%d",&left,&right);
    SelectionSort(arr,left,right);
    return 0;
}
void SelectionSort(int arr[], int left, int right)
{
    int min,i,j,t;
    for (i = left; i < right; i++)
    {
	min = i;
	for (j = i + 1; j <= right; j++)
	    if (arr[min] > arr[j])
		min = j;
         if (min!=i)
         {
             t = arr[min];
	     arr[min] = arr[i];
	     arr[i] = t;
	 }
     }
     for (i = left; i <= right; i++)
         printf("%d",arr[i]);
     printf("\n");
}	
    
   
