#include <stdio.h>
#include <stdlib.h>

void Merg(int arr[], int left, int mid, int right);
void MergeSort(int arr[], int left, int right);
int main()
{
    int a[100];
    int i, m, n;
    scanf("%d%d", &m, &n);
    for (i = 1; i <= n; i++)
	scanf("%d", &a[i]);
    
    MergeSort(a, m, n);

    for (i = m; i <= n; i++)
    {
       	printf("%d", a[i]);
	if (i == n)
	    printf("\n");
	else
	    printf(" ");
    }

    return 0;
}

void MergeSort(int arr[], int left, int right)
{
    int  mid = (left + right) / 2; //求出中间值;
    if (left < right) 
    {
	MergeSort(arr, left, mid); //用递归排序中间值之前的数
	MergeSort(arr, mid + 1, right); //用递归排序中间之后的数
	Merg(arr, left, mid, right); //调用函数Merg使有序的两个数组从数组中的第一个数开始排序，合并为一个有序的数组
    }
  /*  int i;
    for (i = left; i <= right; i++)
        printf("%d ", arr[i]);*/
}

void Merg(int arr[], int left, int mid, int right)
{
    int tem[100]; //定义过度数组，即排成的有序数组
    int i = left, j = mid + 1; 
    int k = 0; 
    while (i <=  mid && j <= right)
    {
	if (arr[i] <= arr[j])
	    tem[k++] = arr[i++]; //使从原数列中间分开的两个数组，从他们的第一个元素开始排序并归并入过度数组中
	else
	    tem[k++] = arr[j++]; //使从原数列中间分开的两个数组，从他们的第一个元素开始排序并归并入过度数组中
    }
    while (i <= mid)
  	tem[k++] = arr[i++]; //当后一个数组已全部并入过度数组，第一个数列还没有完全并入时，把前面一个数组中剩余的数全部放到过度数组的最后
    while (j <= right)
 	tem[k++] = arr[j++]; //当前一个数组已全部并入过度数组，第二个数列还没有完全并入时，把后面一个数组中剩余的数全部放到过度数组的最后
    for (i = 0; i < k; i++)
     	arr[left + i] = tem [i]; //把过度数组中的数放入原数组的规定区间内
/*
    int i;
    for (i = left; i <= right; i++)
        printf("%d", arr[i]);*/
}
