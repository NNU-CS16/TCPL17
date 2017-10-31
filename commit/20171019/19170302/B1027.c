#include<stdio.h>
int main()
{
	int N,n=0,m;
	printf("N(<=1000)=");
		scanf("%d",&N);
		
	do
	{
		n++;
                m=2*n*n-1;
	}
	while(m<N);
		n=n;
	
	int i,j,k;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i-1;j++)
		printf(" ");
		
			for(k=1;k<=2*n+1-2*i;k++)
				printf("*");
		printf("\n");
	}
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=n-1-i;j++)
			printf(" ");
		for(k=1;k<=2*i+1;k++)
			printf("*");
		printf("\n");
	}

	printf("%d\n",N-(2*n*n-1));
	return 0;
}
	

