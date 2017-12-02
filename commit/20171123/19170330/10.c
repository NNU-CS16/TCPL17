#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_ints(const void*a,const void*b)
{
    int arg1 = *(const int*)a;
    int arg2 = *(const int*)b;

    if (arg1 < arg2) 
        return -1;
    if (arg1 > arg2)
        return 1;
        return 0;
}

int main(void)
{
    int a[] = {3, 45, 2, 56, 46, 9,4};
    int size = sizeof a / sizeof *a;
    qsort (a, size, sizeof(a), compare_ints);

    for (int i=0;i<size;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
}

