#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void SelectionSort(int arr[],int left,int right);
int main()
{
	srand(time(NULL));
	int arr[10];
	int i,left,right;
	scanf("%d %d",&left,&right);
	for (i=0;i<10;i++)
			{
			arr[i]=rand()%100;
			printf(" %d ",arr[i]);
							}
	printf("\n");
	SelectionSort(arr,left,right);
	for (i=0;i<10;i++)
			printf(" %d ",arr[i]);
	printf("\n");
	return 0;
}

void SelectionSort(int arr[],int left,int right)
{
	int i,j,temp=0,min=0;
	for (i=left;i<right;i++)
			{
				min=i;
				for (j=i+1;j<=right;j++)
					if (arr[j]<arr[min])
							min=j;
							temp=arr[i];
							arr[i]=arr[min];
							arr[min]=temp;
			}
}
