 #include <stdio.h>
 #include<stdlib.h>
 void BubbleSort (int arr[], int left, int right);
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
    BubbleSort (a, l, r);
    if ((is_sorted (a, l, r)) == 0)
        printf ("yes\n");
    else
        printf ("no\n");
    return 0;
 }
 void BubbleSort (int arr[], int left, int right)
 {
    int i, j, temp;
    for (i = left; i < right; i++)
        for (j = left; j < right ; j++)
            if (arr[j] > arr[j+1])
            {   
                temp = arr[j];
                arr[j] = arr[j+1];
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
