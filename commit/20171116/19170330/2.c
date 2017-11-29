#include <stdio.h>

void BubbleSort(int arr[],int left,int right)
{
    int i,j,tran;
    for (i=left;i<right;i++)
        for (j=left;j<right-i+left;j++)
            if (arr[j]>arr[j+1])
            {
                tran=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tran;
            }
}

int main ()
{
    int left,right,arr[10];
    int i;
    for (i=0;i<10;i++)
    {
        scanf("%d,%d",&left,&right);
        scanf("%d",arr[i]);
        BubbleSort(arr,left,right);
        for (i=0;i<10;i++)
            printf("%d",arr[i]);
        printf("\n");
    }
    return 0;
}
