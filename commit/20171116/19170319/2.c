#include <stdio.h>
#include <stdlib.h>
void BubbleSort(int arr[],int left,int right)
{
    int i,j,temp;
    for (j = left;j <= right;j++)
        for (i = left;i <= right - j;i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
}
int main()
{
    int left,right;
    int n;
    int arr[1000];
    for (n = 0;n <= 999;n++)
    {
        arr[n] = rand()%100;
        printf("%-d ",arr[n]);
    }
    printf("\n");
    printf("please enter left and right");
    scanf("%d%d",&left,&right);
    BubbleSort(arr,left,right);
    for (n = left;n <= right;n++)
        printf("%d ",arr[n]);
    printf("\n");
    return 0;
}
