#include <stdio.h>
void SelectionSort(int arr[], int left, int right)
{
    int i, j, min = left, temp;
    for (i = left; i < right - 1; i++)
    {
	min = i;                  //起始
	for (j = i; j < right - 1; j++)
	{
	    if (arr[min] > arr[j])
	        min = j;
	}
        if (min != i)                //最小值到起始位置
        {
            temp = arr[min];
	    arr[min] = arr[i];
	    arr[i] = temp;
        }
    printf ("%d", arr[i]);
    }
}
int main( )
{
    int left, right, arr[1000];
    printf ("请输入区间：");
    scanf ("%d%d", &left, &right);
    printf ("请输入数组：");
    for (int i = left; i <= right; i++)
    {
	scanf("%d", &arr[i]);
    }
    SelectionSort(arr, left, right);
    return 0;
}
