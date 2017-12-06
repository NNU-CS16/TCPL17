#include <stdio.h>
#include <stdlib.h>
int comp(const void *a, const void *b);
int main()
{
	int origin[100], halfsort[100];
	int i, j, len;
	int n;	
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &origin[i]);
	for (i = 0; i < n; i++)
		scanf("%d", &halfsort[i]);
	for (i = 0; i <= n - 2 && halfsort[i] <= halfsort[i + 1]; i++)
		for (len = ++i; i < n && halfsort[i] == origin[i]; i++)
			len = i == n ? len + 1 : 0;
	if (len)
	{
		puts("Insertion Sort");
		qsort(origin, len, sizeof(int), comp);
	}	
	else
	{ 	
		puts("Merge Sort");
		for (len = 1, i = 0; i < n && len < n - 1; len *= 2)
		{
			for (i = 0; i < n && origin[i] == halfsort[i]; i++);
				for (j = 0; j < n / len; j++)
					qsort(origin + j * len, len, sizeof(int), comp);
					qsort(origin + j * len, n % len, sizeof(int), comp);
		}
	}
	for (i = 0; i < n; i++)
		printf("%d%c", origin[i], i == n - 1 ? '\n' : ' ');
	return 0;
}
int comp(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

