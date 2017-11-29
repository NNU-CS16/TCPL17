#include <stdio.h>
void SelectionSort(int arr[],int left,int right);

int main()
{
   int i,left,right,arr[100];
   for(i = 0; i < 100; i++)
   {
     scanf("%d", &arr[i]);
     if(getchar() == '\n')
     break;
   }
   scanf("%d%d", &left, &right);
   SelectionSort(arr, left, right);
   return 0;
}

void SelectionSort(int arr[], int left, int right)
{
   int i, j,min,x = left;
   for(x = left; x < right; x++)
   {
    min = arr[x];
    for(i = x + 1; i <= right; i++)
     {
	if(arr[i] < min)
	{
        	min = arr[i];
		j = i;
	}
     }
	if(min != arr[x])
		{
			arr[j] = arr[x];
			arr[x] = min;
		}
	}
	for(i = left; i < right; i++)
		printf("%d ", arr[i]);
	printf("%d\n", arr[right]);
}
