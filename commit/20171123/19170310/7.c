#include<stdio.h>
void MergeSort(int arr[],int left,int right)
{
    int temp[100]={0};
    int mid;
    mid=（left+right)/2;
    if(left<mid) 
        MergeSort(arr,left,mid);
    if(mid+1<right)
        MergeSort(arr,mid+1,right);
    int i=left;
    int j=mid+1;
    int n=0;
    while(i<=mid&&j<=right)
    {
        if(arr[i]<arr[j]) 
        { 
            temp[n]=arr[i];
            i++; 
        }
        else 
        { 
            temp[n]=arr[j];
            j++;
        }
        n++;
    }
    if(i>mid)
    for(int k=j;k<=right;k++,n++)
        temp[n]=arr[k];
    else
    {
        for(int k=i;k<=mid;k++,n++)
            temp[n]=arr[k];
        for ( int k=left;k<=right;k++)
            arr[k]=temp[k-left];
     }
}
int main()
{
     int left,right;
     int arr[20];
     printf("left=");
     printf("\n");
     printf("right=");
     printf("\n");
     scanf("%d%d\n",&left,&right)
     MergeSort(int arr[],int left,int right);
     return 0;
}
