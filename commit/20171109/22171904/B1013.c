#include <stdio.h>
#include <math.h>

int is_prime(int n);
int main()
{
	int a[10001],n,temp;
	int M,N,i=0;
	scanf("%d %d",&M,&N);
	for(n=2;i<N;n++)
	{
		temp=is_prime(n);
		if (temp==0) 
		{	
			a[i]=n;
			i++;					
		}
	}
	int p=0;
	for (i=M-1;i<N;i++)
		{
			if (p<9&&i!=N-1) printf("%d ",a[i]);
			if (p==9||i==N-1) printf("%d\n",a[i]);
			p++;
			while (p==10) p=0;
		}
	return 0;
}

int is_prime(int n)
{
	int j;
	if ((n&1)==0&&n>2) return -1;
	else if(n==2) return 0;
	else 
	{
		for (j=3;j<=sqrt(n);j++)
			if (n%j==0) break;
		if (j>sqrt(n)) return 0;
		else return -1;
	}
}
