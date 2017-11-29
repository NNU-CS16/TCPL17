#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int is_sorted(int arr [ ] , int left, int right);
void BubbleSort(int arr [ ] , int left, int right);
int main()
{
    int arr [ 1000 ] , left, right, i = 0;
    scanf("%d%d", &left, &right);
    for (i = 0;i <= right;i++)
    {
        arr [ i ] = rand() % 1000;
    }
    BubbleSort(arr, left, right);
    return 0;
}
void BubbleSort(int arr [ ] , int left, int right)
{
    int temp, j = left, i, m;
    for (i = 0;i <= right - left;i++)
    {
        for (j = left;j < right;j++)
        {
            if (arr [ j ] > arr [ j + 1 ] )
            {
                temp = arr [ j ];
                arr [ j ] = arr [ j + 1 ] ;
                arr [ j + 1 ] = temp;
            }
        }
    }
    for (j = left;j <= right;j++)
    {
        printf("%d ", arr [ j ] );
    }
    printf("\n");
    m = is_sorted(arr, left, right);
    if (m == 1)
        printf("no\n");
    if (m == 0)
        printf("yes\n");
    return;
}
int is_sorted(int arr [ ] , int left, int right)
{
        int j;
        for (j = left;j <= right;j++)
        {
            if(arr [ j ] > arr [ j + 1 ] )
                return 1;
            else
                return 0;
        }
}

