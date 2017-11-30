/*8.c_螺旋矩阵*/
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int N, i, j, k, n = 1; 
	int arr[100][100]; 
	printf("请输入N："); 
	scanf("%d", &N); 
	for (k = 0; k <= N / 2; k++) 
	{ 
		for(j = k; j <= N - k - 1; j++)
			arr[k][j] = n++;
		for(i = k + 1; i < N - k - 1; i++) 
			arr[i][N - k - 1] = n++;
		for(j = N - k - 1; j > k; j--)
			arr[N - k - 1][j] = n++;
		for(i = N - k - 1; i > k; i--)
			arr[i][k] = n++;
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		printf("%d\t", arr[i][j]);
		printf("\n");
	}
	return 0; 
}
