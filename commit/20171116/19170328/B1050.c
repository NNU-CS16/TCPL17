 #include <stdio.h>
 #include <math.h>
void Swap(int *a,int *b)
{
    int m;
    m=*a;
    *a=*b;
    *b=m;
} 

void sort(int arr[],int N)
{
    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = i+1; j < N; j++)
        {
            if (arr[i] < arr[j])
                Swap(&arr[i], &arr[j]);
        }
    }
}
 int main()
{
	int N, m, n, i;
	scanf("%d", &N);
	int a[N];
	for (i = 0; i < N; i++)
		scanf("%d", &a[i]);
	n = sqrt(N);
	while (N%n)
	{
		n--;
	}
    m = N/n;
	sort(a, N);
	int b[m][n], j, k = 0;
	for (i = 0; i < n/2; i++)
    {
        for (j = i; j < n-i-1; j++)
        {
            b[i][j] = a[k];
            k++;
        }
        for (j = i; j < m-i-1; j++)
        {
            b[j][n-i-1] = a[k];
            k++;
        }
        for (j = n-i-1; j > i; j--)
        {
            b[m-i-1][j] = a[k];
            k++;
        }
        for (j = m-i-1; j > i; j--)
        {
            b[j][i] = a[k];
            k++;
        }
     }
	if (n%2)
	{
		for (i = n/2; i < m - n/2; i++)
		{	
			b[i][n/2] = a[k];
			k++;
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%4d ", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}	
