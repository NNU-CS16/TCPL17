#include<stdio.h>

int main( )
{
	int M,N;
	scanf("%d/n",&N);
	int i,j,k;
	int a[100000];
	for(i=0; i<2*N; i=i+2)
		scanf("%d %d\n",&a[i],&a[i+1]);
	scanf("%d\n",&M);
	int temp;
	int c[200000];
	int b[6];
	int count=0;


	for(i=0; i<2*M; i=i+2)
			scanf("%d",&c[i]);

	for(i=0; i<2*(M-1); i=i+2)
	{
		for(j=0; j<2*(M-1)-i; j=j+2)
		{
			if(c[j]>c[j+2])
			{
				temp=c[j];
				c[j]=c[j+2];
				c[j+2]=temp;
			}
		}
	}

	for(i=0; i<2*M; i=i+2)
	{
		for(j=0; j<2*N; j=j+2)
		{
			if(c[i]==a[j])
			{
				c[i+1]=-2;
				for(k=0; k<2*N; k=k+2)
				{
					if(c[k]==a[j+1])
					{
						c[k+1]=-3;
						c[i+1]=-3;
					}
				}
			}
		}
	}


	for(i=0; i<2*M; i=i+2)
		if(c[i+1]!=-3)
			count++;
	printf("%d\n",count);
	for(i=0; i<2*M; i=i+2)
	{
		if(c[i+1]!=-3)
		{
			for(j=0,k=1; j<5; j++,k*=10)
				b[j]=(c[i]/k)%10;
			for(j=4; j>=0; j--)
				printf("%d",b[j]);
		}
		printf(" ");
	}
	
	return 0;
}
		


				

