#include<stdio.h>
#include<stdlib.h>
#define LEN 10
void MergeSort (int arr[],int start,int end)
{
   if(start<end)
   {
       int mid=(start+end)/2;
       MergeSort(arr,start,mid);
       MergeSort(arr,mid+1;end);
       merge(arr,start,end,mid);
   }
}
void merge(int arr[],int start,int end,int mid)
{
    int i,j,k=start;
    int n1=mid-start+1;
    int n2=end-mid;
    int* left=(int*)malloc(n1 * sizeof(int ));
    int* right=(int* )malloc(n2 * sizeof(int));
    for(i=0;i<n1;i++)
       left[i]=arr[start+i];
    for(j=0;j<n2;j++)
       right[j]=arr[mid+1+j];
    i=j=0;
    while(i<n1&&j<n2)
    {
      if(right[j]>left[i])
          arr[k++]=left[i++];
      else arr[k++]=right[j++];
    }
    while (i<n1)
      arr[k++]=left[i++];
    while(j<n2)
      arr[k++]=right[j++];
}
int main()
{
    int arr[LEN];
    int i=0;
    for(i=0;i<LEN;i++)
       scanf("%d",&arr[i]);
    MergeSort(arr,0,LEN-1);
    for(i=0;i<LEN;i++)
       printf("%-3d",arr[i]);
    printf("\n");
    return 0;
}

