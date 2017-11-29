#include <stdio.h>
int is_sorted (int *arr, int left, int right)
{
    int i;
    for (i = left - 1; i < right; i++)
    {
        if (arr[i] > arr[i+1]);
            return -1;
    }
    return 0;
}
int main ()
{
    int arr[100];
    int left, right;
    int i;
    scanf ("%d%d", &left, &right);
    for (i = 0; i < 100; i++)
        scanf ("%d", &arr[i]);
    printf ("%d\n", is_sorted (arr, left, right));
    return 0;
}
