#include<stdio.h>
#include<stdlib.h>
int compare(const void* a,const void* b)
{
    return (*(int*)a-*(int*)b);
}
int main()
{
    int values[] = {50,20,60,40,10,30};
    int key = 40;
    int *p;

    qsort(values,6,sizeof(int),compare);
    p = (int*)bsearch(&key,values,6,sizeof(int),compare);
    if (p != NULL)
    {
        printf("%d is in array.\n",*p);
    }
    else
    {
        printf("%d isn't in array.\n",key);
    }
    return 0;
}

