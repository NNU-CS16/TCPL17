#include<stdio.h>

void InsertionSort(int arr[], int left, int right)
{
	int temp;
	int i,j;
	for(i=left+1; i<=right; i++)
	{
		temp=arr[i];
		for(j=i-1; j>=left; j--)
		{
				if(temp<arr[j])
				{
					arr[j+1]=arr[j];
					if(j==left)
					{
						arr[left]=temp;
						break;
					}
				}
				else
				{
					arr[j+1]=temp;	
					break;
				}
		}
				
	}
}

int main( )
{
	int arr[10]={98,12,87,34,78,10,44,0,23,98};
	int left,right;
	scanf("%d%d",&left,&right);
	InsertionSort(arr, left, right);
	int i;
	for(i=left; i<=right; i++)
		printf("%d ",arr[i]);
	return 0;
}

