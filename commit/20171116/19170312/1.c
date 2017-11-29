#include<stdio.h>
int is_sorted(int arr[],int left,int right)
{
    for(int i=left;i<right;i++)
    {
        if(arr[i] > arr[i+1])
            return 0;
    }
    return 1;
}
int main()
{
    int left,right;
    int a[1000];
    scanf("%d%d",&left,&right);
    for(int i=0;i<=right;i++)
    {
        scanf("%d",&a[i]);
    }
    if(is_sorted(a,left,right)==0)
        printf("Not regular\n");
    else
        printf("Regular\n");
    return 0;
}
