 #include <stdio.h>
 
 int main()
{
	int N;
	scanf("%d", &N);
	int a[N], i, j, k = 0, m, sum = 0;
	for (i = 1; i <= N; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (i%j == 0 && j%2 != 0)
				m = j;
		}
		a[k] = m;
		k++;
	}
	for (i = 0; i < N; i++)
	{
		sum += a[i];
	}
	printf("奇约数和为：%d\n", sum);	
	return 0;
}
