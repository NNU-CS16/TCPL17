 #include <stdio.h>
 #include <stdlib.h>

 int comp(const void *a,const void *b)
 {
  return *(int*)a - *(int*)b;
 }

 int main()
 {
    int N, p, database[100000];
    scanf ("%d %d", &N, &p);
    for (int i = 0; i < N; ++i)
    scanf ("%d", database + i);
    qsort(database, N, sizeof(int), comp);
    int max = 0;
    for (int x = 0, y = 0; y < N; ++x)
    {
        while (y < N && database[y] <= 1L * database[x] * p)
              ++y;
        if (max < y - x)
            max = y - x;
    }
    printf ("%d\n", max);
    return 0;
 }
