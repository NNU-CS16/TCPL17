#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void* a, const void* b)
{
    return *(double*) a > *(double*) b ? 1 : -1;
}
int main()
{
    int n,p,i,j;
    double temp;
    int count = 0,max = 0;
    double a[100100];
    scanf("%d%d",&n,&p);
    for (i = 0;i < n;i++)
    {
        scanf("%lf",&a[i]);
    }
    qsort(a,n,sizeof(a[0]),cmp);
    for (i = 0;i < n;i++)
    {
        temp = a[i] * p;
        for (j = count;j < n;j++)
        {
            if (a[j] > temp)
                break;
            if (j - i >= max)
                max = j - i + 1;
        }
        count = i;
    }
    printf("%d",max);
    return 0;
}

