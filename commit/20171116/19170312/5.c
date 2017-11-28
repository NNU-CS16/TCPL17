#include<stdio.h>
#include<stdlib.h>
int min(int arr[],int left,int right)
{
    for(int i=left;i<=right;i++)
    {
        int flag=0;
        for(int j=left;j<=right;j++)
        {
            if(arr[i]>arr[j])
            {
                flag=1;
                break;
            }
        }
         if(flag==0) return i;
     }
}
void change(int *a,int *b)
{
    int m;
    m=*a;
    *a=*b;
    *b=m;
}
void Selectionsort(int arr[],int left,int right)
{
    for(int i=left;i<right;i++)
        change(&arr[i],&arr[min(arr,i,right)]);
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
    int left,right,i;
    scanf("%d%d",&left,&right);
    int a[100];
    for(i=0;i<=right;i++)
        a[i]=rand()%(101);
    Selectionsort(a,left,right);
    if(is_sorted(a,left,right)==1)
    {
        printf("Success.\n");
        for(i=left;i<=right;i++)
            printf("%d ",a[i]);
        printf("\n");
    }
    else
        printf("Failed.\n");
    return 0;
}
