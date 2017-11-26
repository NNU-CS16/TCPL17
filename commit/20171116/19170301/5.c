 #include<stdio.h>
 #include<stdlib.h>
 void SelectionSort (int arr[], int left, int right);
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
    SelectionSort (a, l, r);
    if ((is_sorted (a, l, r)) == 0)
        printf ("yes\n");
    else
        printf ("no\n");
    return 0;
 }
 void SelectionSort (int arr[], int left, int right)
 {
    int i,j;
    int temp;
    for (i = left + 1; i <= right; i++) 
    {
        temp = arr[i]; 
        j = i - 1;
        while ((j >= left) && (temp < arr[j]))
        {
            arr[j+1] = arr[j];
            j--; 
        }
        arr[j+1] = temp;
    }
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
