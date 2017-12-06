 #include <stdio.h>
 #include <stdlib.h>
 int comp (const void*a, const void*b)
 {
    return *(int*)a - *(int*)b;
 }
 int main ()
 {
    int N, i, j, a[1000000];
    int num = 0;
    double p;
    scanf ("%d %lf", &N, &p);
    for (i = 0; i < N; i++)
        scanf ("%d", &a[i]);
    qsort (a, N, sizeof(int), comp);
    for (i = 0; i < N; i++)
        for (j = i + num; j < N; j++) 
        {
            if (a[j] <= a[i] * p)
            {
                if (num < j - i + 1)
                    num = j - i + 1;
            }
            else
                break;
        }
    printf ("%d\n", num);
    return 0;
 } 
