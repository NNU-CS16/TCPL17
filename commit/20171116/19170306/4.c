#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void InsertionSort(int arr[],int left,int right);
int main()
{
srand(time(NULL));
int arr[10];
int left,right,i;
for (i=0;i<10;i++)
	arr[i]=rand()%100;
scanf("%d %d",&left,&right);
for (i=0;i<10;i++)
	printf(" %d ",arr[i]);
printf("\n");
InsertionSort(arr,left,right);
for (i=0;i<10;i++)
	printf(" %d ",arr[i]);
printf("\n");
return 0;
}

void InsertionSort(int arr[],int left,int right)
{
int i,j,temp;
for (i=left+1;i<right+1;i++)
	for (j=left;j<i;j++)
		if (arr[i]<arr[j])
		{
			temp=arr[i];
			for (;i>j;i--)
				arr[i]=arr[i-1];
			arr[j]=temp;
		}
}
