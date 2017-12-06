#include <stdio.h>
#include <stdlib.h>
int comp (const void * a, const void * b)
{
    return *(int *)a - *(int *)b;
}
int main ()
{
    int start = 0, end = 0, i, sum = 0;
    long int p, N;
    scanf ("%ld %ld", &N, &p);
    long int arr[100000];
    for (i = 0; i < N; i++)
        scanf ("%ld", &arr[i]);
    qsort(arr, N, sizeof (long), comp);
    for (; end < N; start++)
    {
        while (end < N && arr[end] <= arr[start] * p)
            end++;
        if (end - start > sum)
            sum = end - start;
    }
    printf ("%d\n", sum);
    return 0;
}
