#include <stdio.h>
#include <stdlib.h>
int comp(const void *a, const void *b);
int main()
{
	int arr[10] = {3, 1, 9, 8, 6, 7, 4, 5, 2, 0};
	int i;
	qsort(arr, 10, sizeof(int), comp);
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;	
}
int comp(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}
