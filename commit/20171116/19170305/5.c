#include<stdio.h>
void SelectionSort(int arr[], int left, int right);

int main()
{
int n,i,left,right;
scanf("%d %d %d",&n,&left,&right);
int arr[n];
for(i=0;i<n;i++)
scanf("%d",arr+i);
SelectionSort(arr,left,right);
return 0;
}

void SelectionSort(int arr[], int left, int right)
{
int i,j,min;
int temp;
for(i=left;i<=right;i++)
{
min=i;
for(j=i+1;j<=right;j++)
{if(arr[j]<arr[min])min=j;}
if(min!=i)
{temp=arr[i];
arr[i]=arr[min];
arr[min]=temp;}
}
for(i=left;i<=right;i++)
printf("%d ",arr[i]);
printf("\n");
}
