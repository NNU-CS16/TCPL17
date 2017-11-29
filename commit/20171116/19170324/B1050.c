#include <stdio.h>
#include <math.h>

int main()
{
	int N, i, j, temp, arr[10000];
	scanf("%d", &N);
	for (i = 0; i <= N - 1; i++)
		scanf("%d", &arr[i]);
	for (i = 0; i <= N - 2; i++)
		for (j = 0; j <= N - i - 2; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

	int row = sqrt(N), col = sqrt(N);
	while (row * col != N)
	{
		if (row * col < N)
			row++;
		if (row * col > N)
			col--;
	}

	int b[row][col], count = 0;
	i = 0;
	j = 0;
	while (count != N)
	{
		for (; j <= col - 1; j++)
		{
			if (b[i][j] == 0)
				b[i][j] = arr[count++];
			else
				break;
		}
		j--;
		i++;
		for (; i <= row - 1; i++)
		{
			if (b[i][j] == 0)
				b[i][j] = arr[count++];
			else
				break;
		}
		i--;
		j--;
		for (; j >= 0; j--)
		{
			if (b[i][j] == 0)
				b[i][j] = arr[count++];
			else
				break;
		}
		j++;
		i--;
		for (; i >= 0; i--)
		{
			if (b[i][j] == 0)
				b[i][j] = arr[count++];
			else
				break;
		}
		i++;
		j++;
	}

	for (i = 0; i <= row - 1; i++)
	{
		for (j = 0; j <= col - 1; j++)
		{
			printf("%d", b[i][j]);
			if (j <= col - 2)
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
