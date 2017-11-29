#include <stdio.h>
#include <stdlib.h>
int is_sorted(int arr[ ],int left,int right)
{
    for (int i=left; i<right;i++)
    {
        if (arr[i] > arr[i+1])
        return 0;
    }
    return 1;
}
void change(int *a,int *b)
{
    int m;
    m=*a;
    *a=*b;
    *b=m;
}
void Bubblesort(int arr[ ],int left,int right)
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
    for (int i=0; i<=right;i++)
        a[i]=rand()%(101);
    Bubblesort(a,left,right);
    if (is_sorted(a,left,right)==1)
    {
        printf("Success.\n");
        for (int i=left;i<=right;i++)
            printf("%d ",a[i]);
        printf("\n");
    }
    else
        printf("Failed.\n");
    return 0;
}

