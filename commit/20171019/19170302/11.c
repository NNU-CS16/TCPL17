#include <stdio.h>
int main()
{
	int i,j,n;
	int a[50][50]={1};
	printf("Please input n:");
		scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j==0)
				a[i][j]=1;
			else
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		printf("%d",a[i][j]);
		}
	}
	printf("\n");
	return 0;
}

