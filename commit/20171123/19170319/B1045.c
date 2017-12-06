#include <stdio.h>
int main()
{
    int n,i,count = 0;
    int arr[100000],lmax[100000],rmin[100000];
    int max,min;
    scanf("%d",&n);
    for (i = 0;i < n;i++)
        scanf("%d",arr + i);
    for (int i = 0,max = i;i < n;i++)
        lmax[i] = arr[i] >= arr[max] ? arr[max = i] : arr[max];
    for (i = n - 1,min = i;i >= 0;i--)
        rmin[i] = arr[i] <= arr[min] ? arr[min = i] : arr[min];
    for (i = 0;i < n;i++)
    {
        if (arr[i] == lmax[i] && arr[i] == rmin[i])
            count++;
        else 
            arr[i] = 0;
    }
    printf("%d\n",count);
    for (i = 0;i < n && count;i++)
        if (arr[i])
            printf("%d%c",arr[i],--count ? ' ' : '\0');
    printf("\n");
    return 0;
}
