#include <stdio.h>
void BubbleSort(int arr[],int left,int right);

int main()
{
	int arr[10];
	int left,right;
	int i;
	printf("Please input left,right:");
	scanf("%d%d",&left,&right);
	printf("Please input arr[10]:");
	for(i=0; i<10; i++)
	    scanf("%d",&arr[i]);
	BubbleSort(arr,left,right);
	return 0;
}

void BubbleSort(int arr[],int left,int right)
{
	int k,j;
	int temp;
	for(k=(left-1); k<=(right-1); k++)
		for(j=(left-1); j<=(right-k-1); j++)
			if (arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
	printf("排序后:");
	for(k=(left-1); k<right; k++)
		printf("%d ",arr[k]);
	printf("\n");
} 	 

