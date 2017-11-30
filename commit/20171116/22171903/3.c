#include <stdio.h>

int binary_search_recursive(int arr[], int left, int right, int query);
int binary_search_iterative(int arr[], int left, int right, int query);
int main()
{
    int a[100];
    int i, m, n, o, p;
    printf("输入区间\n");
    scanf("%d%d", &m, &n);
    printf("输入%d个严格升序的数据\n", n);
    for (i = 1; i <= n; i++)
	scanf("%d", &a[i]);
    printf("输入待查找的数\n");
    scanf("%d", &o);
    printf("运算方法:递归法输入0,循环法输入1\n");
    scanf("%d", &p);
    if (p == 0)
    	printf("%d\n", binary_search_recursive(a, m, n, o));
    else
	printf("%d\n", binary_search_iterative(a, m, n, o));
    return 0;
}

int binary_search_recursive(int arr[], int left, int right, int query)
{
    if (query == arr[(left + right) / 2])
    	return (left + right) / 2;
    if (query < arr[(left + right) / 2])
	return binary_search_recursive(arr, left, (left + right) / 2, query);
    if (query > arr[(left + right) / 2]) 
	return binary_search_recursive(arr, (left + right) / 2, right, query);
}

int binary_search_iterative(int arr[], int left, int right, int query)
{
    while (arr[(left + right) / 2] != query)
    {
	if (arr[(left + right) / 2] > query)
	    right = (left + right) / 2;
	if (arr[(left + right) / 2] < query)
	    left = (left + right) / 2;
    }
    return (left + right) / 2;
}
