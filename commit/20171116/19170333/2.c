#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int is_sorted (int arr[], int left, int right);
void BubbleSort (int arr[], int left, int right)
{
    int i, j, temp;
    for (i = left - 1; i < right; i++)
    {
        for (j = i + 1; j  < right; j++)
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
    }
    printf("%d\n", is_sorted (arr, left, right));
}
int is_sorted (int arr[], int left, int right)
{
    int i;
    for (i = left - 1; i < right; i++)
    {
        if (arr[i] > arr[i+1])
            return -1;
    }
    return 0;
}
int main ()
{
    srand ((unsigned int) time (NULL));
    int arr[100];
    int i, n, m;
    scanf ("%d%d", &n, &m);
    for (i = 0; i < 100; i++)
        arr [i] = rand() % 100 + 1;
    BubbleSort (arr, n, m);
    return 0;
}
