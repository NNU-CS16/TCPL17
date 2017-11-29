#include <stdio.h>
int is_sorted(int arr[],int left,int right)
{
    int i;
    for (i = left;i < right;i++)
    {
        if (arr[i-1] <= arr[i])
            continue;
        else
            return 1;
    }
    return 0;
}
int main()
{
    int arr[100];
    int left,right;
    int x,i = 0;
    for ( ;i <= 99;i++)
    {
        scanf("%d",&x);
        if (x != -1)
            arr[i] = x;
        else 
            break;
    }
    printf("enter left and right\n");
    scanf("%d%d",&left,&right);
    if (is_sorted(arr,left,right) == 0)
        printf("有序");
    else
        printf("无序");
    return 0;
}
