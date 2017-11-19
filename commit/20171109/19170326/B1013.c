#include<stdio.h>

int main()
{
	int M,N;
	scanf("%d %d",&M,&N);
	int flag=0;
	int j,i;
	int m=0,n=0;
	for(j=2;m<N;j++)
	{
		for(i=1;i<j;i++)
		{
			if(j/i!=j&&j%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			m++;
			if(m>=M&&m<=N)
			{
				n++;
				printf("%d",j);
				if(n%10==0)
					printf("\n");
				else if(n!=N)
					printf(" ");
			}
		}
		flag=0;
	}
	return 0;
}
