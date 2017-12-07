#include <stdio.h>

void MergeSort(int arr[], int left, int right);
void Merge(int arr[], int subarr[], int left, int mid, int right);

int main(void)
{
    int left, right, arr[10];

    printf("Please input arr[10] :\n");
    for (int i = 0; i < 10; i++)
       scanf("%d", &arr[i]);
    printf("Please input left and right :\n");
    scanf("%d%d", &left, &right);
    MergeSort(arr, left, right);
    for (int i = 0; i < 10; i++)
       printf("%2d", arr[i]);
    putchar('\n');

    return 0;
}

void MergeSort(int arr[], int left, int right)
{
    int mid, subarr[10];

    if (left < right)
    {
        mid = (left + right)/2;
        MergeSort(arr, left, mid);
        MergeSort(arr, mid + 1, right);
        Merge(arr, subarr, left, mid, right);
    }
}
void Merge(int arr[], int subarr[], int left, int mid, int right)
{
    int i = left, j = mid + 1, k = left;

    while (i != mid + 1 && j != right + 1)
    {
       if (arr[i] > arr[j])
           subarr[k++] = arr[j++];
       else
           subarr[k++] = arr[i++];
    }
    while (i != mid + 1)
       subarr[k++] = arr[i++];
    while (j != right + 1)
       subarr[k++] = arr[j++];
    for (i = left; i <= right; i++)
       arr[i] = subarr[i];
}
