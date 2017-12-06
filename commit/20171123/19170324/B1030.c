#include <stdio.h>
#include <stdlib.h>
int comp(const void*a, const void*b);

int main()
{
	int M, n, N, p, i, cnt;
	scanf("%d%d", &N, &p);
	int arr[N];
	for (i = 0; i <= N -1; ++i)
		scanf("%d", &arr[i]);
	qsort(arr, N, sizeof(int), comp);

	for (i = N - 1, cnt = N; i >= 0; --i, --cnt)
	{
		M = arr[i];
		if (M <= arr[0] * p)
			break;
	}

	printf("%d\n", cnt);
	return 0;
}

int comp(const void*a, const void*b)
{
	return *(int*)a - *(int*)b;
}
