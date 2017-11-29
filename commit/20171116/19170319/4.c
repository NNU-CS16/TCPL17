#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void InsertionSort(int arr[],int left,int right)
{
    int i,j,help;
    for (i = left + 1;j <= right;i++)
    {
        help = arr[i];
        for (j = i - 1;(i >= left)&&(arr[j] > help);j--)
        {
            arr[j+1] = arr[j];
        }
        arr[j+1] = help;
    }
    for (i = left;i <= right;i++)
        printf("%d ",arr[i]);
}
int main()
{
    srand((unsigned)time(0));
    int arr[50];
    int i = 0;
    int left,right;
    for ( ;i < 50;i++)
    {
        arr[i] = rand()%100;
        printf("%d ",arr[i]);
    }
    printf("\n");
    scanf("%d%d",&left,&right);
    InsertionSort(arr,left,right);
    return 0;
}
