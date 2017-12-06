 #include <stdio.h>
 #include<stdlib.h>
 void MergeSort (int arr[], int left, int right);
 void Merge (int arr[], int subarr[], int left, int mid, int right);
 int is_sorted (int arr[], int left, int right);
 int main ()
 {
    int a[100];
    int l, r, n, i;
    printf ("left=");
    scanf ("%d", &l);
    printf ("right=");
    scanf ("%d", &r);
    printf ("n=");
    scanf ("%d", &n);
    for (i = 0;i < n; i++)
        a[i] = rand()%(101);
    MergeSort (a, l, r);
    if ((is_sorted (a, l, r)) == 0)
        printf ("yes\n");
    else
        printf ("no\n");
    return 0;
 }
 void MergeSort (int arr[], int left, int right)
 {
    int mid, subarr[100];   
    if (left < right)
    {
        mid = (left + right)/2;
        MergeSort (arr, left, mid);
        MergeSort (arr, mid + 1, right);
        Merge (arr, subarr, left, mid, right);
    }
 }
 void Merge (int arr[], int subarr[], int left, int mid, int right)
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
 int is_sorted (int arr[], int left, int right)
 {
    int i;
    for (i = left; i < right; i++)
    {
        if (arr[i] > arr[i + 1])
        return 1;
    }    
    return 0;
 }
