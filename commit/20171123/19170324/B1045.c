#include <stdio.h>

int main()
{
	int N, i, a, k, j;
	int cnt, flag1 = 0, flag2 = 0;
	scanf("%d", &N);
	int arr[N], out[N];
	for (i = 0; i <= N - 1; ++i)
		scanf("%d", &arr[i]);

	for (i = 0, a = 0, cnt = 0; i <= N - 1; ++i)
	{
		flag1 = 0;
		flag2 = 0;
		for (j = i + 1; j <= N - 1; ++j)
			if (arr[i] > arr[j])
				flag1 = 1;
		for (k = i - 1; k >= 0; --k)
			if (arr[k] > arr[i])
				flag2 = 1;
		if (flag1 == 0 && flag2 == 0)
		{
			cnt++;
			out[a++] = arr[i];
		}
	}
	printf("%d\n", cnt);
	for(a = 0; a <= cnt - 1; ++a)
	{
		printf("%d", out[a]);
		if (a <= N - 2)
			printf(" ");
	}
	printf("\n");

	return 0;
}
