#include <stdio.h>
void SelectionSort(int arr[], int left, int right);
int main()
{
	int arr[10];	
	int k;
	int left,right;
	printf("Please input arr[10]:");
	for (k = 0; k < 10; k++)
		scanf("%d",&arr[k]);
	printf("Please input left,right:");
	scanf("%d%d",&left,&right);
	SelectionSort(arr,left,right);
	return 0;
}

void SelectionSort(int arr[], int left, int right)
{
	int i,j;
	int temp;
	int index;
	for (i = left; i < right; i++)
	{
		index = i;
		for (j = i + 1; j < right + 1; j++)
			if (arr[j] < arr[index])
				index = j;

		if (index != i)
		{	
			temp = arr[index];
			arr[index] = arr[i];
			arr[i] = temp;
		}
	}
	for (i = left; i <= right; i++)
		printf("%d ",arr[i]);
}
		
