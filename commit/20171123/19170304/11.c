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
    int a[7]={1,2,7,9,10,11,8};
    int key=10;
    int *p;
    qsort(a,7,sizeof(int),compare);
    p=(int*)bsearch(&key,a,7,sizeof(int),compare);
    if (p!=NULL)
        printf("%d is in array.\n",key);
    else
        printf("%d is not in array.\n",key);
    return 0;
}
