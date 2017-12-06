#include<stdio.h>
void MergeSort(int arr[],int left, int right);
void MergeSortsort(int arr[],int B[],int left,int mid,int right);
void copy(int arr[],int B[],int left,int right);
void print(int arr[],int left,int right);
int main()
{
int n,left,right;
int i;
scanf("%d %d %d",&n,&left,&right);
int arr[n];
for(i=0;i<n;i++)
scanf("%d",arr+i);
print(arr,left,right);
return 0;
}
void print(int arr[],int left,int right)
{
int i;
MergeSort(arr,left,right);
for(i=left;i<=right;i++)
printf("%d ",arr[i]);
printf("\n");
}

void MergeSort(int arr[],int left,int right)
{
int len,min1,min2;
int i,n=right-left+1;
int B[n];
for(len=1;len<n;len=2*len)
{
for(i=left;i<n;i=i+2*len)
{
min1=(i+len)<n?(i+len):n;
min2=(i+2*len)<n?(i+2*len):n;
MergeSortsort(arr,B,i,min1,min2-1);
}
copy(arr,B,left,right);
}
}
void MergeSortsort(int arr[],int B[],int left,int mid,int right)
{
int i=left,j=mid;
int k;
for(k=left;k<=right;k++)
{
if(i<mid&&(arr[i]<arr[j]||j>right))
{B[k]=arr[i];i++;}
else
{B[k]=arr[j];j++;}
}
}

void copy(int arr[],int B[],int left,int right)
{
int i;
for(i=left;i<=right;i++)
arr[i]=B[i];
}

