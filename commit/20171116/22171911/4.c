#include <stdio.h>
void InsertionSort(int arr[], int left, int right); 
int main( )
{
    int arr[1000], left, right, j, temp;
    printf ("请输入区间和插入的数：");
    scanf ("%d%d%d", &left, &right, &temp);
    printf ("请输入数组：");
    for (j = 0; j <= right; j++)
    {
        scanf ("%d", &arr[j]);
    }
    int i;
    for (i = left; i <= right; i++)
    {
	if (arr[i] > arr[i+1])
        {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    InsertionSort(arr, left, right);
    return 0;
    
}
void InsertionSort(int arr[], int left, int right)
{
    int i, j, temp;
    for (i = left + 1; i < right; i++)
    {
	temp = arr[i];
	j = i - 1;
	while (j >= 0 && arr[i] > temp)
	{
	    arr[j+1] = arr[j];
	    j--;
	}
	if (j != i-1)
	    arr[j+1] = temp;
	printf ("%d", arr[i]);
    }
  
}

    


