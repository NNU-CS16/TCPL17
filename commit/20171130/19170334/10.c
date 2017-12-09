#include <stdio.h>//求数组的逆序对的个数
#include <stdlib.h>

void Merge(int arr[], int subarr[], int left, int mid, int right, int *p);
void MergeSort(int arr[], int subarr[], int left, int right, int *p);

int main()
{
    int *arr, *subarr, n, count = 0, *p;

    p = &count;
    printf("Please input the number: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    subarr = (int *)malloc(n * sizeof(int));
    printf("Please input the array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    MergeSort(arr, subarr, 0, n - 1, p);
    printf("%d\n", count);
    return 0;
}

void MergeSort(int arr[], int subarr[], int left, int right, int *p)
{
     int mid;

     if (left < right)
     {
         mid = (left + right)/2;
         MergeSort(arr, subarr, left, mid, p);
         MergeSort(arr, subarr, mid + 1, right, p);
         Merge(arr, subarr, left, mid, right, p);
     }
}

void Merge(int arr[], int subarr[], int left, int mid, int right, int *p)
{
     int i = left, j = mid + 1, k = left;

     while (i != mid + 1 && j != right + 1)
     {
         if (arr[i] > arr[j])
         {  
              (*p) += mid - i + 1;
              subarr[k++] = arr[j++];
         }
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
