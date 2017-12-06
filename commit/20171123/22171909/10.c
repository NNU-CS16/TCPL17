 #include <stdio.h>
 #include <stdlib.h>
 #include <limits.h>
 
 int compare_ints(const void* a, const void* b)
 {
    int n = *(const int*)a;
    int m = *(const int*)b;
    if (n < m) return -1;
    if (n > m) return 1;
    return 0;
 }

 int main()
 {
    int ints[] = { -2, 99, 0, -743, 2, INT_MIN, 4 };
    int size = sizeof ints / sizeof *ints;
    qsort(ints, size, sizeof(int), compare_ints);
    for (int i = 0; i < size; ++i) 
	{
        printf("%d ", ints[i]);
    }
    printf("\n");
 }
