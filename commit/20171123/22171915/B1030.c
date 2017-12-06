#include <stdio.h>
#include <stdlib.h>
int comp(const void *a,const void *b)
{return *(int*)a - *(int*)b;}
int main()
{
    int N,p,data[100000];
    scanf("%d %d",&N, &p);
    for (int i = 0; i < N; i++)
    scanf("%d",data + i);
    qsort(data, N, sizeof(int), comp);
    int max = 0;
    for (int first = 0, last = 0; last < N; first++)
    {
        while (last < N && data[last] <= 1L*data[first]*p)
            last++;
        if (max < last - first)
            max = last - first;
    }
    printf("%d\n",max);
    return 0;
}

