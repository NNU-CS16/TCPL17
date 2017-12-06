#include <stdio.h>
int ji(int N);

int main()
{
	int N, r, k, i, s, j;
	scanf("%d", &N);
	int arr[10], up[10], sum[20];
	
	for (k = 1; k <= N; k++)
	{
		s = ji(k);
		for (i = 0; s != 0; i++)
		{
			arr[i] = s % 10;
			s = s / 10;
		}		

		for (j = 1, r = 0; j <= 20; j++)
		{
			sum[j] = arr[j] + up[j] + r;
			if (sum[j] > 9)
			{
				sum[j] = sum[j] % 10;
				r = sum[j] / 10;
			}
		}

		for (j = 0; j <= 19; j++)
			up[j] = sum[j];
	}


	for(j = 20; j >= 0; j--)
		printf("%d", sum[j]);
	printf("\n");
			

	return 0;
}

int ji(int n)
{
	int i, max;
	if (n & 1 == 1)
		return n;
	else
	{
		while(1)
		{	
			if (n & 1 == 1)
				break;
			n = n / 2;
		}
		return n;
	}
}
