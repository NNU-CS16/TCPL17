#include<stdio.h>

void Merge(int arr[], int temparr[], int left, int right)
{
    int mid;
    int i=left, j = mid + 1;
    int k = left;
    while (i <= mid && j <= right)
    { 
        if (arr[i] < arr[j])
        {  
            temparr[k++] = arr[i++];  
        }
        else
        {  
            temparr[k++] = arr[j++];  
        }  
    }  
    while (i <= mid)
    {  
        temparr[k++] = arr[i++];  
    }     
    while (j <= right)
    {  
        temparr[k++] = arr[j++];  
    }  
    for (i = left;i <= right;i++)
    {  
        arr[i++] = temparr[i++];  
    }  
}

void MergeSort(int arr[], int temparr[], int left, int right)
{
    int mid;
    if (left < right)
    {
        mid = (left + right) / 2;
        MergeSort(arr, temparr, left, mid);
        MergeSort(arr, temparr, mid + 1, right);
        MergeSort(arr, temparr, left, right);
    }
}   

int main()
{
    int arr[10] = {4, 2, 3, 9, 5, 11, 6, 7, 8, 1};
    int i, temparr[10];
    MergeSort(arr, temparr, 0, 9);
    for (i = 0; i < 10; i++)
        printf("%d", arr[i]);
        printf("\n");
        return 0;
}
