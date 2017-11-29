#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void BubbleSort(int arr[], int left, int right);
int main()
{
    int a[100], b[100];
    int m, n, i, j;
    printf("输入区间[m, n]\n");
    scanf("%d%d", &m, &n);
    printf("输入%d个数据\n", n);
    for (i = 1; i <= n; i++)
    {
	scanf("%d", &a[i]);

    }
    for (j = 0; j < 100; j++)
    {
/*	srand(time(NULL));	*/
	b[j] = rand();
    }
    BubbleSort(a, m, n);
    BubbleSort(b, 0, 100);
    return 0;
}

void BubbleSort(int arr[], int left, int right)
{
    int i, j, tem;
    for (i = 0; i < right - left; i++)
    {
	for (j = left; j < right - i; j++)
	{
	    if (arr[j] > arr[j + 1])
	    {
		tem = arr[j];
		arr[j] = arr[j + 1];
		arr[j + 1] = tem;
	    }
	}
    }
    for (i = left; i <= right; i++)
  	printf("%d ", arr[i]);
    printf("\n");
}
