#include <stdio.h>
void InsertionSort(int arr [ ] , int left, int right);
int main()
{
    int arr [ 1000 ] , left, right, i;
    scanf("%d%d", &left, &right);
    for (i = 0;i <= right;i++)
        scanf("%d", &arr [ i ] );
    InsertionSort(arr, left, right);
    return 0;
}
void InsertionSort(int arr [ ] , int left, int right)
{
    int m = 2, i, j, n = 0, temp;
    for (i = 0;i < right - left;i++)
    {
        for (j = left;j < right;j++)
        {
            if (arr [ j ] > arr [ j + 1 ] )
            {
                temp = arr [ j ] ;
                arr [ j ] = arr [ j + 1 ] ;
                arr [ j + 1 ] = temp;
            }
        }
    }
    for (i = right;i >= left; )
    {
        if (arr [ i ] > m)
        {
            arr [ i + 1 ] = arr [ i ] ;
            arr [ i ] = m;
        }
        i--;
        if (arr [ i ] <= m)
        {
            arr [ i + 1 ] = m;
            break;
        }
    }
    for (i = left;i <= right + 1;i++)
        printf("%d ", arr [ i ] );
    printf("\n");
    return;
}
