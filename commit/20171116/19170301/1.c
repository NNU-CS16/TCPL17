 #include <stdio.h>
 int is_sorted (int arr[], int left, int right);
 int main ()
 {
    int a[100];
    int l, r, i = 0;
    printf ("left=");
    scanf ("%d", &l);
    printf ("right=");
    scanf ("%d", &r);
    while ((scanf ("%d", &a[i])) == 1)
        i++;
    if (is_sorted (a, l, r) == 0)
        printf ("yes\n");
    else
        printf ("no\n");
    return 0;
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
