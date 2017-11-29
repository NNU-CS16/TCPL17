#include <stdio.h>
void SelectionSort(int arr [ ] , int left, int right);
int main()
{
    int arr [ 1000 ] , left, right, i;
    scanf("%d%d", &left, &right);
    for (i = 0;i <= right;i++)
        scanf("%d", &arr [ i ] );
    SelectionSort(arr, left, right);
    return 0;
}
void SelectionSort(int arr [ ] , int left, int right)
{
    int i, j, d, m = arr [ left ] , temp, n = left;
    for (i = 0;i < right - left;i++)
    {
	d = left;
        for (j = left;j < right;j++)
        {
            if (m > arr [ j + 1 ] )
            {
                m = arr [ j + 1 ] ;
                d = j + 1;
            }
        }
        temp = arr [ left ] ;
        arr [ left ] = arr [ d ] ;
        arr [ d ] = temp;
        left++;
        m = arr [ left ] ;
    }
    left = n;
    for (i = left;i <= right;i++)
	printf("%d ", arr [ i ] );
    printf("\n");
    return;
}
