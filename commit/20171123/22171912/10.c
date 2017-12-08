/*10.c_快速排序*/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
 
int compare_ints(const void* a, const void* b)
{
    int arg1 = *(const int*)a;
    int arg2 = *(const int*)b;
 
    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;
 
    // return (arg1 > arg2) - (arg1 < arg2); // possible shortcut可能路径
    // return arg1 - arg2; // erroneous shortcut错误路径(fails if INT_MIN is present)
}
 
int main()
{
    int ints[] = { -2, 99, 0, -743, 2, INT_MIN, 4 };
    int size = sizeof ints / sizeof *ints;
 
    qsort(ints, size, sizeof(int), compare_ints);
 
    for (int i = 0; i < size; i++)
	{
        printf("%d ", ints[i]);
    }
 
    printf("\n");
	return 0;
}
