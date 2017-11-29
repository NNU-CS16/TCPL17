#include<stdio.h>
void SelectionSort(int arr[],int left,int right)
{
 int i = 0;
 int min = 0;
 int j = 0;
 int tmp = 0;
 for(i = 0;i < right-left-1;i++)
 {
        min = i; 
        for(j = i;j < right-left;j++) 
        {
	  if(arr[min]>arr[j])
	  {
	   min = j;
	  }
	}
	if(min != i) 
	{
	  tmp = arr[min];
	  arr[min] = arr[i];
	  arr[i] = tmp;
	}
 }
}

int main()
{
 int left,right;
 int arr[6] = {5,4,3,2,9,1};
 int i = 0;
 SelectionSort(arr,left,right); 
 for(i = 0;i < 6;i++)
 {
   printf("%d ",arr[i]);
 }
 return 0;
}

