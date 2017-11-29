#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void InsertionSort (int arr[], int left, int right)
{
    int i, j, key;
    for (i = left; i < right; i++)
    {
        key = arr[i];
        for (j = i - 1; j >= (left - 1) && (arr[j] > key); j--)
            arr[j + 1] = arr[j];
        arr[j + 1] = key;
    }
    for (j = left - 1; j < right; j++)
        printf ("%-5d", arr[j]);
}
int main ()
{
    int i;
    int arr[20];
    srand ((unsigned int ) time (0));
    for (i = 0; i < 20; i++)
        arr[i] = rand() % 20+1;
    InsertionSort (arr, 5, 15);
    printf ("\n");
    return 0;
}

