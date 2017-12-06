#include <stdio.h>
#include <stdlib.h>
void MergeSort(int arr[], int left, int right);
void Merge(int arr[], int tarr[],int left, int mid, int right);

void MergeSort(int arr[], int left, int right)
{
    int mid;
    int tarr[1000];
    if (left < right)
    {
        mid = (left + right) / 2;
        MergeSort(arr,left,mid);
        MergeSort(arr,mid+1,right);
        Merge(arr,tarr,left,mid,right);
    }
}

void Merge(int arr[], int tarr[],int left, int mid, int right)
{
    int i=left, j=mid, k=left;
    while(i != mid+1 && j != right+1)
    {
        if(arr[i] > arr[j])
            tarr[k++] = arr[j++];
        else 
            tarr[k++] = arr[i++];
    }
    while (i != mid+1)
        tarr[k++] = arr[i++];
    while (j != right+1)
        tarr[k++] = arr[j++];
    for (i=left;i<=right;i++)
        arr[i]=tarr[i];
}

int main ()
{
    int a[8] = {50,10,20,30,70,40,80,60};
    int i, b[8];
    MergeSort(a,0,7);
    for (i=0;i<8;i++)
        printf("%d",a[i]);
    printf("\n");
    return 0;
}
