#include <stdio.h>
void InsertionSort(int arr[], int left, int right);
int main()
{
    int a[100];
    int i, m, n;
    printf("输入区间\n");
    scanf("%d%d", &m, &n);
    printf("输入数据\n");
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);    
    InsertionSort(a, m, n);
    return 0;
}

void InsertionSort(int arr[], int left, int right)
{
    int i, j, tem;
    for (i = left + 1; i <= right; i++)
    {
 	tem = arr[i];
	for (j = i - 1; j >= left; j--)
	{
	    if (tem < arr[j])
	    {
		arr[j + 1] = arr[j];
		arr[j] = tem;
	    }
	}	
    }
    for (i = left; i <= right; i++)
	printf("%d ", arr[i]);
    printf("\n");
}
