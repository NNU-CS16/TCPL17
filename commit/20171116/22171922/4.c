#include<stdio.h>
void InsertionSort(int arr[],int left,int right);
{
	int i,j;
	int temp;
	for(i=left+1;i<right;i++)
	{
		temp=arr[i];
		j=i-1;
	while((j>=0)&&(arr[j]>temp))
	{
		arr[j+1]=arr[j];
		j--;
	}
	if(j!=i-1)
	{arr[j+1]=temp;}
}
