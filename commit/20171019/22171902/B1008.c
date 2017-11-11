#include<stdio.h>
int main()
{
	int M,N,i,t = 0,temp;
	int a[100],b[100];
	scanf("%d%d",&N,&M);
	for (i = 0; i < N; i++)
		//		scanf("%d",&a[i]);
	{
		a[i] = i+1;
		printf("%2d ", a[i]);
	}
	printf("\n");
	
	for (i = N-1; i>=N-M; i--)
		b[N-1-i] = a[i];
	for (; i >= 0; i--)
		a[i + M] = a[i];
	for (i = 0; i < M; i++)
		a[i] = b[M-i-1];
	for (i = 0; i < N; i++)
		printf("%2d ", a[i]);

	return 0;
}


