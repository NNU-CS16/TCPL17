#include <stdio.h>
#include <stdlib.h>
int sort(const void *a, const void *b)
{
    return *((double *)a) - *((double *)b);
}
int main ()
{
    int N, i, j;
    int sum=0;
    double p,a[10000],t;
    scanf("%d %lf",&N,&p);
    for (i=0;i<N;i++)
    {
        scanf("%lf", &a[i]);
    }
    qsort(a, N, sizeof(double), sort);
    for (i=0; i<N; i++)
    {
        for (j=N-1; j>0; j--)
        {
            if (a[j] <= a[i]*p)
            {
                if (sum<j-i)
                {
                    sum = j-i;
                }
                else 
                break;
            }
        }
    }
    printf("%d\n",sum+1);
    return 0;
}
