#include <stdio.h>

int is_sorted(int arr[], int left, int right)
{
    int i;
    for (i=left;i<right;i++)
    {
        if (arr[i] > arr[i+1])
        return 0;
    }
    return 1;
}

int main ()
{
    int min,max,a[1000];
    scanf("%d%d",&min,&max);
    int i;
    for (i=0;i<max;i++)
    {
        scanf("%d",a[i]);
    }
    if (is_sorted(a,min,max==0))
        printf("NO\n");
    else 
        printf("YES\n");
    return 0;
}

