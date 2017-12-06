#include <stdio.h>
int max_ji(int n);
int main()
{
	int i, total = 0, N;
	scanf("%d", &N);
	for (i = 1; i <= N; i++)
		total += max_ji(i);
	printf("%d\n", total);
	return 0;
}
int max_ji(int n)
{
	int i, sum = 0;
	int arr[1000];
	for (i = 1; i <= n; i++)
	{
		if ((i % 2 != 0) && (n % i == 0))
		{
			sum++;
			arr[sum - 1] = i;
		}
	}
	if (sum > 1)
	return arr[sum - 1];
	else 
	return 1;
}

