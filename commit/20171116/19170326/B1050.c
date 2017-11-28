#include<stdio.h>
#include<math.h>

int main( )
{
	int N;
	scanf("%d\n",&N);
	int arr[10000];
	int str[100][100];
	int i,j,k,p=0;
	int m,n;
	for(i=0; i<N; i++)
		scanf("%d",&arr[i]);
	for(i=0; i<N-1; i++)
	{
		for(j=0; j<N-1-i; j++)
		{
			if(arr[j]<arr[j+1])
			{
				k=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=k;
			}
		}
	}
	for(i=sqrt(N); i>0; i--)
	{
		if(N%i==0)
		{
			n=i;
			break;
		}
	}
	m=N/n;
	for(k=1; n-k>=0; k=k+2)
	{
		for(i=k/2,j=k/2;j<=n-1-k/2;j++)
		{
			str[i][j]=arr[p];
			p++;
		}
		for(i=k/2+1,j=n-1-k/2;i<=m-1-k/2;i++)
		{
			str[i][j]=arr[p];
			p++;
		}
		for(i=m-1-k/2,j=n-2-k/2;j>=k/2;j--)
		{
			str[i][j]=arr[p];
			p++;
		}
		for(i=m-2-k/2,j=k/2;i>k/2;i--)
		{
			str[i][j]=arr[p];
			p++;
		}
	}
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
		{
			if(j!=n-1)
				printf("%d ",str[i][j]);
			else
				printf("%d\n",str[i][j]);
		}
	return 0;
}
			
