#include <stdio.h>
int main()
{
    int N, i, j, m, n;
    int num = 0, t = 0, a[N];
    scanf("%d", &N);
    for (i =0; i < N; i++)
	scanf("%d", &a[i]);
    for (i = 0; i < N - 1; i++)
	for (j = 0; j < N - 1; j++)
	    if (a[j] < a[j + 1])
	    {
		t = a[j];
		a[j] = a[j + 1];
		a[j + 1] = t;
	    }
    for (m = 1; m * m < N || N % m != 0; m++)
	n = N / m;
    int k, b[m][n];
    for (k = 0; k < m; k++)
    {
	for (i = k; i = n -k; i++)
	    b[k][i] = a[num++];
	for (j = k + 1; j < m - k;j++)
	    b[j][i - 1] = a[num++];
	for (i = n - k - 2; i >= k; i--)
	    b[j - 1][i] = a[num++];
	for (j = m - k - 2;j >= k + 1;j--)
	    b[j][i + 1] = a[num++];
    }
    for(i = 0; i < m; i++)

    {
	for (j = 0; j < n; j++)
		printf("%d",b[i][j]);
	        if (j != n-1)
		printf(" ");
    }
    printf("\n");
    reutrn 0;
}

	    
       

