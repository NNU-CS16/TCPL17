#include <stdio.h>
#define LEN 8
void Merge(int arr[], int left, int mid, int right)
{
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


void Merge_sort(int arr[], int left, int right)
{
    int mid;
    if (left < right)
    {
        mid = (left + right) / 2;
        printf("sort (%d-%d, %d-%d) %d %d %d %d %d %d %d %d\n",
               left, mid, mid+1, right,
               arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7]);

     
        Merge_sort(arr, left, mid); 
        Merge_sort(arr, mid+1, right);
        
        Merge(arr, left, mid,right); 

        printf("Merge (%d-%d, %d-%d) to %d %d %d %d %d %d %d %d\n",
               left, mid, mid+1, right,
               arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7]);
    }
}

int main()
{
    int arr[LEN] = { 5, 2, 4, 7, 1, 3, 2, 6 };
    Merge_sort(arr, 0, LEN-1);

    return 0;
}
