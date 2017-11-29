#include <stdio.h>

void InsertionSort(int arr[], int left, int right);
int main()
{
	int arr[10]={99,98,12,14,45,87,98,13,3,2};
	int left,right;
	scanf("%d%d",&left,&right);
        InsertionSort(arr,left,right);
        int i;
	for(i = left; i <= right; i++)
		printf("%d",arr[i]);
	return 0;
}
void InsertionSort(int arr[], int left, int right)
{
	int temp,i,j;
	for(i = left + 1; i <= right; i++)
	{
		temp = arr[i];
		for(j = i - 1; j >= left; j--)
		{
			if(temp < arr[j])
			{
				arr[j+1] = arr[j];
				if(j == left)
				{
					arr[left] = temp;
					break;
				}
			}
			else
			{
				arr[j+1] = temp;
				break;
			}
		}
	}
}

	
		




