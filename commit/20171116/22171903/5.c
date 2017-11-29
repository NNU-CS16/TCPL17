#include <stdio.h>
void SelectionSort(int arr[], int left, int right);
int main()
{
    int a[100];
    int m, n, i;
    printf("输入区间\n");
    scanf("%d%d", &m, &n);
    printf("输入数据\n");
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    SelectionSort(a, m, n);
    return 0; 
}

void SelectionSort(int arr[], int left, int right)
{
    int i, j, k, tem;
    for (i = left; i < right; i++)
    {   
	k = i;
	for (j = i + 1; j <= right; j++)
	{
	    if (arr[k] > arr[j])
	        k = j;
	}
    tem = arr[i];
    arr[i] = arr[k];
    arr[k] = tem;
    }
    for (i = left; i <= right; i++)
	printf("%d ", arr[i]);
    printf("/n");
}
