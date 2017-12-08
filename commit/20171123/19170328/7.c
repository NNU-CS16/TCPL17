#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void MergeSort(int arr[], int left, int right)
{
    int str[10000] = {0};
    int mid = left + (right - left) / 2;
    if ( left < mid) 
        MergeSort (arr, left, mid);
    if (mid + 1 < right)
        MergeSort (arr, mid + 1, right);
    int i = left;
    int j = mid + 1;
    int k = 0;
    while (i <= mid && j <= right)
    {
        if (arr[i] < arr[j])
        {
            str[k] = arr[i];
            i++;
        }
        else
        {
            str[k] = arr[j];
            j++;
        }
        k++;
    }
    int t;
    if (i > mid)
        for ( t = j; t <= right; t++,k++)
            str[k] = arr[t];
    else
        for ( t = i; t <= mid; t++,k++)
            str[k] = arr[t];

    for (t = left; t <= right; t++)
        arr[t] = str[t-left];
    
}

int main()
{
    int i, arr[100];
    int a, b;
    scanf("%d%d", &a, &b);
    for(i = 0; i<100; i++)
        arr[i] = rand()%100;
    MergeSort(arr, a, b);
    for(i=a; i<=b; i++)
        printf("%d  ", arr[i]);
    printf("\n");
    return 0;
}
