#include<stdio.h>
#include<stdlib.h>
void Insertionsort(int arr[],int left,int right)
{
    int i;
    for(i=right+1;i>left;i--)
        arr[i]=arr[i-1];
    for(i=left+2;i<=right+1;i++)
    {
        arr[left]=arr[i];
        for(int j=i;j>left;j--)
        {
            if(arr[j]<arr[j-1])
            {
                int m;
                m=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=m;
            }
            else
                break;
        }
    }
    for(i=left;i<=right;i++)
        arr[i]=arr[i+1];
}
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
    scanf("%d%d",&left,&right);
    int a[100];
    for(int i=0;i<=right;i++)
        a[i]=rand()%(101);
    Insertionsort(a,left,right);
    if(is_sorted(a,left,right)==1)
    {
        printf("Success.\n");
        for(int i=left;i<=right;i++)
            printf("%d ",a[i]);
        printf("\n");
    }
    if(is_sorted(a,left,right)==0)
        printf("Failed.\n");
    return 0;
}
