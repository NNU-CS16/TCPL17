#include <stdio.h>
#include <stdlib.h>

int compare(const void *a,const void *b)
{
    int *pa=(int*)a;
    int *pb=(int*)b;
    return *pa-*pb;
}

int main()
{
    int a[10]={1,9,4,3,6,4,8,3,23,24};
    qsort(a,10,sizeof(int),compare);
    for (int i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}
