#include <stdio.h>
#include <stdlib.h>
int sort(const void *a,const void *b)
{
    return *(int*)a - *(int*)b;
}
int main()
{
    int arr[101];
    int temp[101];
    int n,i,j;
    scanf("%d",&n);
    for (i = 0;i < n;i++)
        scanf("%d",&arr[i]);
    for (j = 0;j < n;j++)
        scanf("%d",&temp[j]);
    for (i = 0;temp[i] <= temp[i + 1] && i < n - 1;i++);
    for (j = ++i;temp[j] == arr[j] && j < n;j++);
    if (j == n)
    {
        printf("Insertion Sort\n");
        qsort(temp,i + 1,sizeof(int),sort);
        for (int i = 0;i < n;i++)
            printf("%d%c",temp[i],i == n - 1 ? '\n' : ' ');
    }
    else
    {
        printf("Merge Sort");
        int flag = 1;
        int gap = 1;
        while (flag)
        {
            flag = 0;
            for (int t = 0;t < n;t++)
                if (arr[t] != temp[t])
                    flag = 1;
            gap = gap * 2;
            int m;
            for (m = 0;m + gap - 1 < n;m += gap)
                qsort(arr + m,gap,sizeof(int),sort);
            if ((m + gap / 2 - 1) < n)
                qsort(arr + m,n - m,sizeof(int),sort);
        }
        for (int i = 0;i < n;i++)
            printf("%d%c",arr[i],i == n - 1 ? '\n' : ' ');
    }
    return 0;
}
