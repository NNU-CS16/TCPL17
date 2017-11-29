/*19.c_螺旋矩阵升级*/
#include <stdio.h>

void InsertionSort(int a[], int N)
{
    int i,j;
    int temp;
    for(i = 1; i < N; ++i)
    {
        temp=a[i];
        for(j = i - 1; j >= 0 && a[j] < temp; --j)
        {
            a[j + 1] = a[j];
        }
        a[j + 1] = temp;
    }
}

int main()
{
	int c, i, j, k, N, m, n, a[1000], arr[1000][1000];
	scanf("%d", &N);
	for (c = 0; c < N; ++c)
		scanf("%d", &a[c]);
	InsertionSort(a, N);

	for(m = 1; !(m * m >= N && N % m == 0); m++) ;
    n = N / m;

	for (k = 0, c = 0; k <= m / 2; k++)
    {
        for(j = k; j <= n - k - 1; j++)
            arr[k][j] = a[c++];
        for(i = k + 1; i < m - k - 1; i++)
            arr[i][n - k - 1] = a[c++];
        for(j = n - k - 1; j > k; j--)
            arr[m - k - 1][j] = a[c++];
        for(i = m - k - 1; i > k; i--)
            arr[i][k] = a[c++];
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
		{
			if (j != n - 1)
        		printf("%d ", arr[i][j]);
			else
				printf("%d", arr[i][j]);
		}
        printf("\n");
    }
	return 0;
}
