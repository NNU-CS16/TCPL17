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

void SelectionSort(int arr[], int left, int right)
{
    int min, i = left, j, temp;

    for (i = left; i <= right; i++)
    {
       min = i;
       for (j = i + 1; j <= right; j++)
         if (arr[j] < arr[min])
            min = j;
       temp = arr[min];
       arr[min] = arr[i];
       arr[i] = temp;
    }
}

int main()
{
    int left,right;
    scanf("%d%d",&left,&right);
    int arr[100];
    for(int i=0;i<=right;i++)
        arr[i]=rand()%(101);
    SelectionSort(arr, left, right);
    if (is_sorted(arr,left,right)==0)
    {
        printf("Succeeded.\n");
        for (int i=left;i<=right;i++)
            printf("%d ",arr[i]);
        printf("\n");
    }
    else
        printf("Failed.\n");
    
    return 0;
}
