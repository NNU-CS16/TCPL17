#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int comp (const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}
int main ()
{
    long int i, j = 0, N;
    long int arr[100000], b[100000];
    scanf ("%ld", &N);
    for (i = 0; i < N; i++)
        scanf ("%ld", &arr[i]);
    memcpy (b, arr, N * sizeof (long));
    qsort (arr, N, sizeof (long), comp);
    for (i = 0; i < N; i++)
    {
        if (arr[i] == b[i])
            j++;
        else arr[i] = 0;
    }
    long int p = i = 0;
    printf ("%ld\n", j);
    for (; i < N; i++)
        if (arr[i] != 0)
        {
            printf ("%-3ld", arr[i]);
            p++;
            if (p % j == 0)
                printf ("\n");
        }
    return 0;
}
