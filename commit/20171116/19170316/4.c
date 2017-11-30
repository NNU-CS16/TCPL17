#include<stdio.h>

void InsertionSort(int arr[],int left,int right)
{
	int i,j;
	int temp;
	for(i=left+1;i<right;i++)
	{
		if(arr[i-1]>arr[i])
		temp=arr[i];
		j=i;
		while(j>0 && arr[j-1]>temp)
		{
			arr[j]=arr[j-1];
			j=j-1;
		}
		arr[j]=temp;
	}
}

int main()

{
	int arr[10]={1,10,2,9,3,8,4,7,5,6};
	int left,right;
	scanf("%d%d",&left,&right);
	InsertionSort(arr,left,right);
	for(int k=0;k<10;k++)
	printf("%d ",arr[k]);
	return 0;
}
