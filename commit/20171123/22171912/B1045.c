/*9_B1045.c_初识快速排序*/
#include <stdio.h>

int main()
{
	int i, j, k, N, c, arr[100000], count[100000];
	scanf("%d", &N);
	for (i = 0; i < N; ++i)
		scanf("%d", &arr[i]);
	for (i = 0, c = 0; i < N; ++i)
	{
		for (j = 0 ; j < i; ++j)
		{
			if (arr[j] > arr[i])
				break;
		}
		for (k = i; k < N; ++k)
		{
			if (arr[k] < arr[i])
				break;
		}
		if (j == i && k == N)
			count[c++] = arr[i];
	}
	printf("%d\n", c);
	for (i = 0; i < c; ++i)
	{
		if (i == c - 1)
			printf("%d", count[i]);
		else
			printf("%d ", count[i]);
	}
	return 0;
}
