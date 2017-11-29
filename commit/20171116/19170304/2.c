#include<stdio.h>
#include<stdlib.h>

int is_sorted(int arr[],int left,int right)
{
    int i,flag=0;
    for (i=left;i<right;i++)
    {
        if (arr[i]<=arr[i+1])
            continue;
        else
        {
            flag=-1;
            break;
         }            
     }
     return flag;
}
void change(int *pa,int *pb)
{
    int m;
    m=*pa;
    *pa=*pb;
    *pb=m;
}
void Bubblesort(int arr[],int left,int right)
{
    int i,j;
    for (i=left;i<=right;i++)
    {
        for (j=i+1;j<=right;j++)
        {
            if (arr[i]>arr[j])
            change(&arr[i],&arr[j]);
        }
    }
}
int main()
{
    int left,right;
    int a[100];
    scanf("%d%d",&left,&right);
    for (int i=0;i<=right;i++)
        a[i]=rand()%(111);
    Bubblesort(a,left,right);
    if (is_sorted(a,left,right)==0)
    {
        printf("Succeeded.\n");
        for (int i=left;i<=right;i++)
            printf("%d ",a[i]);
        printf("\n");
    }
    else
        printf("Failed.\n");
    return 0;
}
