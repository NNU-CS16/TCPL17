#include <stdio.h>
void BubbleSort(int arr[10], int left, int right);
int main()
{
    int left,right;
    int arr[10],i;
    printf("the number is:");
    for (i = 0; i < 10; i++)
    scanf("%d", &arr[i]);
    scanf("%d%d", &left, &right);
    BubbleSort(arr,left,right);
    return 0;
}
void BubbleSort(int arr[10], int left, int right)
{
    int i,j,temp;
    for (j = (left - 1);j <= (right - 1 ); j++)
        for(i=(left - 1); i <= (right - i-1); i++)
            if (arr[i] > arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
    printf("up:");
    for (j = (left - 1); j < right ; j++)
    printf("%d ",arr[j]);
    printf("\n");
}
                    
 
    
