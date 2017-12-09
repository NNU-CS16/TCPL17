 #include <stdio.h>
 #include<stdlib.h>
 int MergeSort (int arr[], int left, int right);
 int Merge (int arr[], int count, int left, int mid, int right);
 int main ()
 {
    int n, t;
    scanf ("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++)
        scanf ("%d", &arr[i]);
    t = MergeSort (arr, 0, n - 1);
    printf ("%d\n", t);
    return 0;
 }
 int MergeSort (int arr[], int left, int right)
 {
    int mid, count1, count2;
    int count = 0;
    if (left < right)
    {
        mid = (left + right) / 2;
        count1 = MergeSort (arr, left, mid);
        count2 = MergeSort (arr, mid + 1, right);
        count = count1 + count2;
        count = Merge (arr, count, left, mid, right);
    }
    return count;
 }
 int Merge (int arr[], int count, int left, int mid, int right)
 {
    int i, j;
    for (i = left; i < mid + 1; i++)
        for (j = mid + 1; j < right + 1; j++)        
            if (arr[i] > arr[j])
                count ++;        
    return count;
 }
