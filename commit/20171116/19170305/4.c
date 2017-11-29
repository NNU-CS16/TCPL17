#include<stdio.h>
void InsertionSort(int arr[], int left, int right);

int main()
{
int n,i,left,right;
scanf("%d %d %d",&n,&left,&right);
int arr[n];
for(i=0;i<n;i++)
scanf("%d",arr+i);
InsertionSort(arr,left,right);
return 0;
}

void InsertionSort(int arr[], int left, int right)
{
int i,j;
int temp;
for(i=left+1;i<=right;i++)
{
temp=arr[i];
for(j=i-1;j>=left;j--)
{
if(arr[j]>temp)
{arr[j+1]=arr[j];arr[j]=temp;continue;}
else
{arr[j+1]=temp;break;}
}
}
for(i=left;i<=right;i++)
printf("%d ",arr[i]);
printf("\n");
}

