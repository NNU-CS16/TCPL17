#include <stdio.h>
int is_sorted(int arr[], int left, int right);
int main()
{
    int a[100];
    int m, n, i;
    printf("输入区间\n");
    scanf("%d%d", &m, &n);
    printf("输入数据\n");
    for (i = 1; i <= n; i++)
    {
	scanf("%d", &a[i]);

    }
    printf("%d\n", is_sorted(a, m, n));
    return 0;
}

int is_sorted(int arr[], int left, int right)
{
    int flag = 1;
    int i;
    for (i = left; i < right; i++)
    {
	if (arr[i] > arr[i + 1])
	{
	    flag = 0;
	    break;
	}
    }
    return flag;
}
