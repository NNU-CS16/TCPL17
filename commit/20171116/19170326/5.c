#include<stdio.h>

void SelectionSort(int arr[], int left, int right)
{
	int i,j;
	int temp;
	for(j=0; j<right-left; j++)
	{
		for(i=left; i<right-j; i++)
		{
			temp=arr[right-j];
			if(arr[i]>temp)
			{
				arr[right-j]=arr[i];
				arr[i]=temp;
			}
		}
	}
}

int main( )
{
	int left,right;
	scanf("%d %d",&left,&right);
	int arr[10]={9,8,7,6,5,4,3,2,1,0};
	SelectionSort(arr, left, right);
	int i;
	for(i=left; i<=right; i++)
		printf("%d ",arr[i]);
	return 0;
}
