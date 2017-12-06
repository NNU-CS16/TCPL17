#include <stdio.h>

int main()
{
    int N,i,count=0;
    int a[100000]={0};
    scanf("%d",&N);
    for (i=0;i<N;i++)
        scanf("%d",a+i);
    printf("\n");
    if (N>2)
    {
        if (a[0]<a[1])
            count++;
        for (i=1;i<N-1;i++)
        {
            if (a[i]<a[i+1]&&a[i]>a[i-1])
                count++;
        }
        if (a[N-2]<a[N-1])
            count++;
    }
    else if (N=2)
    {
        if (a[0]<a[1])
            count=2;
    }
    printf("%d\n",count);
    return 0;
} 
