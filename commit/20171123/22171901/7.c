#include <stdio.h>
#include<stdlib.h>

int main ()
{
    int arr[10];
    int left , right , i , j;

    printf ("输入数据：");
    for (i = 0; i <= 9; i++)
        scanf ("%d" , &arr[i]);

    printf ("输入区间：");
    scanf ("%d%d" , &left , &right);

    MergeSort(arr, left, right);
    for (j = 0; j <= 9; j++)
        printf ("%d\t" , arr[j]);
    return 0;
}

void Merge(int arr[], int left, int right)
{
    int mid , k=0;
    mid = (left + right) / 2;
    int b[100];
    int i = left;  // i为第一段序列下标
    int j = mid + 1;  //j为第二段序列下标

    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            b[k] = arr[i];
            i++;
            k++;
        }

        else
        {
            b[k] = arr[j];
            j++;
            k++;
        }

    }

    while (i <= mid)
    {
        b[k] = arr[i];
        i++;
        k++;
    }

    while (j <= right)
        b[k] = arr[j];
        j++;
        k++;

    for (i = left; i <= right; i++)
            arr[i] = b[i];
}

void MergeSort(int arr[], int left, int right)
{
	int mid = (left + right) / 2;
	if (left < right)
	{
		MergeSort(arr, left , mid);
		MergeSort(arr, mid+1, right);
		Merge(arr , left , right);
	}
}




