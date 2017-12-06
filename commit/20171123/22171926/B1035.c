#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void merge_sort (int *list, int length, int b[]);
void Insertion_Sort (int arr[], int b[], int LEN);
int Match (int arr[], int b[], int LEN)
{
    int i;
    for (i = 0; i < LEN; i++)
        if (arr[i] != b[i])
            return 0;
    return 1;
}
void Insertion_Sort (int arr[], int b[], int LEN)
{
    int i, j, temp, m, n = 0, p = 0 ,s = 0;
    int d[100000] = {0};
    for (i = 1; i < LEN; i++)
    {
        temp = arr[i];
        for (j = i - 1; j >= 0 && arr[j] > temp; j--)
        {
            if (arr[j] > temp)
                arr[j + 1] = arr[j];
            else break;
        }
        arr[j + 1] = temp;
        if (Match (arr, b, LEN) || Match (d, b, LEN))
        {
            s++;
            memcpy (d, arr, LEN * sizeof (int));
            if (s == 2)
            {
                printf ("Insertion Sort\n");
                for (n = 0; n < LEN; n++)
                {
                    printf ("%-3d", arr[n]);
                    p++;
                    if (p % LEN == 0)
                        printf ("\n");
                }
            }
        }
    }
}
        
void merge_sort(int arr[], int LEN, int b[])
{
    int i, left_min, left_max, right_min, right_max, next;
    int p, s = 0, n = 0;
    int d[100000] = {0};
    int tmp[LEN];
      
    for (i = 1; i < LEN; i *= 2)
    {
        for (left_min = 0; left_min < LEN - i; left_min = right_max)
        {
            right_min = left_max = left_min + i;
            right_max = left_max + i;
 
            if (right_max > LEN)
                right_max = LEN;
 
            next = 0;
            while (left_min < left_max && right_min < right_max)
            tmp[next++] = arr[left_min] > arr[right_min] ? arr[right_min++] : arr[left_min++];
 
            while (left_min < left_max)
                arr[--right_min] = arr[--left_max];
 
            while (next > 0)
                arr[--right_min] = tmp[--next];
        }
        if (Match (arr, b, LEN) || Match (d, b, LEN))
        {  
            s++;
            memcpy (d, arr, LEN * sizeof (int));
            if (s == 2)
            {
                printf ("Merge Sort\n");
                for (p = 0; p < LEN; p++)
                {
                    printf ("%-3d", arr[p]);
                    n++;
                    if (n % LEN == 0)
                        printf ("\n");
                }
            }
        }   
        
     }
 
}
int main ()
{
    int i;
    static int m;
    int LEN;
    scanf ("%d", &LEN);
    int arr[LEN], b[LEN], c[LEN];

    for (i = 0; i < LEN; i++)
        scanf ("%d", &arr[i]);
    for (i = 0; i < LEN; i++)
        scanf ("%d", &b[i]);
    memcpy(c, arr, LEN * sizeof (int));
    Insertion_Sort(arr, b, LEN);
    merge_sort (c, LEN, b);
    return 0;
}
