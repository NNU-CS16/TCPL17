/*20.c_关爱单身狗*/
#include <stdio.h>

int main()
{
	int ID1, ID2;
	int n, m, i, j, h, k, K;
	int arr[10000], couple[100000] = {0}, single[10000];
	scanf("%d\n", &n);
	for (i = 0; i < n; ++i)
	{
		scanf("%d%d", &ID1, &ID2);
		couple[ID1] = ID2;
		couple[ID2] = ID1;
	}
	scanf("%d\n", &m);
	for (j = 0; j < m; ++j)
		scanf("%d", &arr[j]);
	for (j = 0, k = 0, h = 0; j < m; ++j)
	{
		if (couple[arr[j]] != 0)
		{
			for (h = 0; h < m; ++h)
			{
				if (arr[h] - couple[arr[j]] == 0)
					break;
			}
			if (h == m)//??
                single[k++] = arr[j];//??
		}
		else
		{
			single[k] = arr[j];
			++k;
		}
	}
	K = k;
	int temp;
	for (i = 0;i < K - 1; ++i)
	{
		for (j = i + 1; j < K; ++j)
		{
			if (single[i] > single[j])
			{
				temp = single[i];
				single[i] = single[j];
				single[j] = temp;
			}
		}
	}
	printf("%d\n", k);
	for(k = 0;k < K; ++k)
	{
		if(k != K - 1)
			printf("%d ", single[k]);
		else
			printf("%d", single[k]);
	}
	return 0;
}
