#include <stdio.h>
int main()
{
	int a[1000010]={1,1};
	int N, K;
	int i, j;
	scanf("%d%d", &N, &K);
	for (i=2; i<=N; i++)
	{
		for (j=1; j<=K&&j<=i; j++)
		{
			a[i]+=a[i-j];
			a[i]%=100007;
		}
	}
	printf("%d", a[N]);
	
	printf("\n");
	return 0;
}
