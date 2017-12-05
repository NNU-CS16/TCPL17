#include <stdio.h>
#include <stdlib.h>
int comp(const void *a, const void *b);
int main()
{
	int arr[10] = {0, 1, 2, 3, 4, 5, 9, 10, 11, 12};
	int n = 9;
	int *p;
	p = (int *)bsearch(&n, arr, 10, sizeof(int), comp);
	if (p != NULL)
		printf("完成\n");
	else
		printf("未完成\n");
	return 0;
}
int comp(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}
