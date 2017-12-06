#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void MergeSort(int arr[], int left, int right)
{
	int str[10000] = {0};
	int mid = left + (right - left) / 2;
	if (mid + 1 < right)
		 MergeSort (arr, mid + 1, right); 
	if (left < mid)
		 MergeSort (arr, left, mid); 
	int a = left;
	int b = mid + 1;
	int k;
	for (k = 0;a <= mid && b <= right;)
	{
		if (arr[a] < arr[b])
		{
			str[k] = arr[a];
			a++;
		}
		else
		{
			str[k] = arr[a];
			b++;
		}
		k++;
	}
	int i;
	if(i >= mid)
	{
		 for ( i = a; i <= mid; i++,k++) 
			 str[k] = arr[i]; 
		  for (i = left; i <= right; i++) 
			 arr[i] = str[i-left]; 
	}
	else
		 for ( i = b; i <= right; i++,k++)
			 str[k] = arr[i];
}

int main()
{
	 int i,arr[100]; 
	 int a,b; 
	 scanf("%d%d",&a,&b); 
	 for(i = 0; i<100; i++) 
         arr[i] = rand()%100; 
	 MergeSort(arr,a,b); 
	 for(i=a; i<=b; i++) 

	 printf("%d  ",arr[i]); 
	 printf("\n"); 
	 return 0; 
} 




		

