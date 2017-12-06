#include<stdio.h>
#include<stdlib.h>
void merge(int a[],int left,int mid,int right)
{
    int i,j,m,n;
    i=left,m=mid;
    j=mid+1,n=right;
    int k=0;
    int temp[1000];
    while(i<=m && j<=n)
    {
        if(a[i]<a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
    }
    while(i<=m)
        temp[k++]=a[i++];
    while(j<=n)
        temp[k++]=a[j++];
    for(i=0;i<k;i++)
        a[left+i]=temp[i];
}
void mergesort(int a[],int left,int right)
{
    int mid=(left+right)/2;
    if(left<right)
    {
        mergesort(a,left,mid);
        mergesort(a,mid+1,right);
        merge(a,left,mid,right);
    }
}
int is_sorted(int arr[],int left,int right)
{
for(int i=left;i<right;i++)
        if(arr[i] > arr[i+1])
            return 0;
    return 1;
}
int main()
{
    int i,left,right;
    scanf("%d%d",&left,&right);
    int a[right];
    for(i=0;i<=right;i++)
        a[i]=rand()%101;
    mergesort(a,left,right);
    if(is_sorted(a,left,right)==1)
        printf("Success.\n");
    else
        printf("Failed\n");
    for(i=0;i<=right;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}
