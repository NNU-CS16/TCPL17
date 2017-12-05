#include <stdio.h>

int main()
{
	int a[100][100];
	int n,i = 0,j,sum = 1;
	scanf("%d",&n);
	while(i < n/2)
	{
		i++;
		for(j = 1; j < n/2; i++)
			a[i][j] = sum++;
		for(j = i; j < n - i - 1; j--)
			a[j][n-i-1] = sum++;
		j = n - i -1;
		while(j > i)
		{
			j--;
			a[n-i-1][j] = sum++;
		}
		j = n - i - 1;
		while(j > i)
		{
			j--;
			a[i][j] = sum++;
		}
	}
		if(n%2 != 0)
			a[n/2][n/2] = sum;
		i = 0;
		while(i < n)
		{
			i++;
			for(j = 0; j < n; j++)
				printf("%6d", a[i][j]);
			printf("\n");
		}
		return 0;
}

	

	



	
