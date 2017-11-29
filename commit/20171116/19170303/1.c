#include<stdio.h>

int is_sorted(int arr[],int left,int right)
{
    for(int i=left; i<right; i++)
    {
        if(arr[i] > arr[i+1])
            return 0;
    }
    return 1;
}
int main()
{
    int left,right;
    int a[10],i;
    for (i=0; i<10; i++)
        scanf("%d", &a[i]);
    scanf("%d%d",&left,&right);
    if(is_sorted(a,left,right) == 0)
        printf("无序\n");
    else
        printf("有序\n");
    return 0;
}
