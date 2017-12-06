#include <stdio.h>
#include <stdio.h>
void MergeSort(int arr[], int b[], int left, int right);
void Merge(int arr[], int b[], int left, int right)
{
    int mid;
    mid = (left + right) / 2;
    int i = left, k = right, j = mid;
    while (i != mid + 1 && j != right + 1)
    {
        if (arr[i] > arr[j])
            b[k++] = arr[j++];
        else
            b[k++] = arr[i++];
    }
    while (i != mid + 1)
        b[k++] = arr[i++];
    while (j != right + 1)
        b[k++] = arr[j++];
    for (i = left; i <= right; i++)
        arr[i] = b[i];
}
void MergeSort(int arr[],int b[], int left, int right)
{
    int mid;
    if (left < right)
    {
        mid = (left + right) / 2;
        MergeSort(arr, b, left, mid);
        MergeSort(arr, b, mid + 1, right);
        Merge(arr, b, left, mid, right);
    }
}
int main(int argc, char *argv[])
{
    int arr[100], b[100];
    int i;
    int left, right;
    printf ("请输入区间：");
    scanf ("%d%d", &left, &right);
    printf ("请输入数组：");
    for (i = 0; i < right; i++)
    {
        scanf ("%d", &arr[i]);
    }
    MergeSort(arr, b, left, right);
    for (i = 0; i < right; i++)
        printf ("%d", arr[i]);
    return 0;
}
