#include <stdio.h>
int is_sorted(int arr[], int left, int right);

int main()
{
    int arr[10],left,right;
    scanf("%d%d",&left,&right);
    for (int i = 0; i < 10; i++)
        scanf("%d",&arr[i]);
    is_sorted(arr,left,right);
    return 0;
}
int is_sorted(int arr[], int left, int right)
{
    int i,b = 0;
    for (i = left; i <= right - 1; i++)
    {
        if (arr[i] <= arr[i+1])
        b++;
        else if (arr[i] >= arr[i+1])
        b=b+2;
    }
    if (b==(right - left))
    printf("sheng xv");
    else if (b==(right - left) * 2)
    printf("jiang xv");
    else printf("wu xv");
    return 0;
}

