#include<stdio.h>
int main()
{
	int N,M,k;
	scanf("%d%d\n",&N,&M);
	int arr[20];
	int i;
	for(i=0;i<=N-1;i++)
	scanf("%d",&arr[i]);
	k=M%N;
	if(k==0)
	{
		for(i=0;i<=N-1;i++)
		{
			if(i==0)
				printf("%d",arr[i]);
			else
				printf(" %d",arr[i]);
		}

	}
	else
	{
		for(i=N-k;i<=N-1;i++)
		{
			if(i==N-k)
				printf("%d",arr[i]);
			else
				printf(" %d",arr[i]);
		}
		for(i=0;i<=N-k-1;i++)
			printf(" %d",arr[i]);
	}
return 0;
}





