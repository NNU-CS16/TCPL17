#include <stdio.h>
void SelectionSort(int arr[],int left,int right)
{
    int i,j,temp;
    for (i = left;i <= right;i++)
    {
        for (j = i;j <= right;j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (i = left;i <= right;i++ )
        printf("%d ",arr[i]);
}
int main()
{
    int left,right;
    int arr[10] = {2,5,9,7,4,7,1,0,8,3};
    scanf("%d%d",&left,&right);
    SelectionSort(arr,left,right);
    return 0;
}
