#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void BubbleSort(int arr[], int left, int right)
{
	int i,j,temp;
	for(j=left; j<right; j++)
		for(i=left; i<right; i++)
		{
			if(arr[i+1]<arr[i])
			{
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
}

int main()
{
	int arr[20];
	int i;
	int left,right;
	scanf("%d %d", &left, &right);
	srand(time(NULL));
	for(i=0; i<20; i++)
		arr[i]=rand( )%100;
	BubbleSort(arr, left, right);
	for(i=left; i<=right; i++)
		printf("%d\n",arr[i]);
	return 0;
}

