#include <stdio.h>
#include <stdlib.h>

void Merge(int arr[], int subarr[], int start, int mid, int end, int *p);
void MergeSort(int arr[], int subarr[], int start, int end, int *p);

int main(void)
{
    int *arr, *subarr, n, count = 0, *p;

    p = &count;
    printf("Please input the number of arr: \n");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    subarr = (int *)malloc(n * sizeof(int));
    printf("Please input arr: \n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    MergeSort(arr, subarr, 0, n - 1, p);
    printf("%d\n", count);

    return 0;
}

void MergeSort(int arr[], int subarr[], int start, int end, int *p)
{
     int mid;

     if (start < end)
     {
         mid = (start + end)/2;
         MergeSort(arr, subarr, start, mid, p);
         MergeSort(arr, subarr, mid + 1, end, p);
         Merge(arr, subarr, start, mid, end, p);
     }
}

void Merge(int arr[], int subarr[], int start, int mid, int end, int *p)
{
     int i = start, j = mid + 1, k = start;

     while (i != mid + 1 && j != end + 1)
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
     while (j != end + 1)
         subarr[k++] = arr[j++];
     for (i = start; i <= end; i++)
         arr[i] = subarr[i];
}
