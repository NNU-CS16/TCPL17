#include <stdio.h>
int main()
{
	int arr[1000];
	int n, i, j;
	int  sum = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			sum++;
		}
	}
	printf("%d\n", sum);
	return 0;
}
