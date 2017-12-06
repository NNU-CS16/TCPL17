#include <stdio.h>
void Merge(int arr[], int temparr[], int left, int right)
{
    int mid;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int a[n1], b[n2];
    int i, j, k;

    for (i = 0; i < n1; i++) 
        a[i] = arr[left+i];
    for (j = 0; j < n2; j++)
        b[j] = arr[mid+1+j];

    i = j = 0;
    k = left;
    while (i < n1 && j < n2)
        if (a[i] < b[j])
            arr[k++] = a[i++];
        else
            arr[k++] = b[j++];

    while (i < n1)
        arr[k++] = a[i++];
    while (j < n2) 
        arr[k++] = b[j++];
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
