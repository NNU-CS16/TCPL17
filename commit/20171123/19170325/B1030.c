#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;
}

int main(void)
{
    int *a, *b, N, p, max = 0;

    scanf("%d %d", &N, &p);
    a = (int *)malloc(N * sizeof(int));
    b = (int *)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++)
      scanf("%d", &a[i]);
    qsort(a, N, sizeof(int), comp);
    for (int i = 0; i < N; i++)
      for (int j = i + 1; j < N; j++)
         if (a[i] <= a[j] * p)
            b[i] = j - i + 1;
    for (int i = 0; i < N; i++)
       if (b[i] > max)
            max = b[i];
    printf("%d\n", max);
    free(a);
    free(b);

    return 0;
}
