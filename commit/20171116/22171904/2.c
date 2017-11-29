#include <stdio.h>
#include <stdlib.h>
	
void BubbleSort(int arr[],int left ,int right)
{
	int i,j,temp;
	for(i=left;i<right;i++)
	{
		for( j=left;j<right-i+left;j++)
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
	}
}

int is_sorted(int arr[],int left ,int right)
{
	for(int k=left;k<right;k++)
	{
		if(arr[k]>arr[k+1])
			return 0;
	}
	return 1;
}


int main()
{
	int left,right,a[100];
	scanf("%d %d",&left,&right);
	for(int i=0;i<=right;i++)
		a[i]=rand()%(101);
	BubbleSort(a,left,right);
	if(is_sorted(a,left,right)==1)
	{
		printf("YES.\n");
		for(int k=left;k<=right;k++)
			printf("%d ",a[k]);
		printf("\n");
	}
	else
		printf("No.\n");
	return 0;
	
}
