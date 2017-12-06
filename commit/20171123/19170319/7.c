#include <stdio.h>
void MergeSort(int arr[],int left,int right)
{
    int temp[100] = {0};
    int mid = (left + right) / 2;
    if (left < mid)
        MergeSort(arr,left,mid);
    if (mid + 1 < right)
        MergeSort(arr,mid + 1,right);
    int li = left;
    int ri = mid + 1;
    int i = 0;
    while (li <= mid && ri <= right)
    {
        if (arr[li] < arr[ri])
        {
            temp[i] = arr[li];
            li++;
        }
        else
        {
            temp[i] = arr[ri];
            ri++;
        } 
        i++;
    }
    while (li <= mid)
    {
        temp[i] = arr[li];
        li++;
        i++;
    }
    while (ri <= right)
    {
        temp[i] = arr[ri];
        ri++;
        i++;
    }
    for (int k = left;k <= right;k++)
    {
        arr[k] = temp[k - left];  
    }
}
int main()
{
    int arr[10] = {2,6,7,5,4,3,8,1,6,7};
    int left,right;
    scanf("%d%d",&left,&right);
    MergeSort(arr,left,right);
    for (int i = left;i <= right;i++)
        printf("%d ",arr[i]);
    return 0;
}
