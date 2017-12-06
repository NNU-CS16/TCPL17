#include<stdio.h>

int f(int x)
{
	int i;
	int flag=0;
	if(x%2!=0)
		return x;
	else
		for(i=x-1; i>0; i=i-2)
			if(x%i==0)
				return i;
}

int main( )
{
	int N;
	int sum=0;
	scanf("%d",&N);
	int i;
	for(i=1; i<=N; i++)
		sum+=f(i);
	printf("%d\n",sum);
	return 0;
}
