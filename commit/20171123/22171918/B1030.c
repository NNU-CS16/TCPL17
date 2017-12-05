#include <stdio.h>
#include <stdlib.h>
int comp(const void *a,const void *b);
int main()
{
	int arr[100000];
	int i, j, k, max = 0;
	int n, m;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	qsort(arr, n, sizeof(int), comp);
	for (j = 0, k = 0; k < n; j++)
	{
		while(k < n && arr[k] <= 1L * arr[j] * m)
			k++;
		if (max < k - j)
			max = k - j;
	}
		printf("%d\n", max);
	return 0;
}
int comp(const void *a,const void *b)
{
	return *(int*)a - *(int*)b;
}

