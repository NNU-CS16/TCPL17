#include<stdio.h>
#include<string.h>
int fac_bit_count(int n)
{
	int i; int N=1; int t=0; 
	for(i=1;i<=n;i++)
	N *= i;

	while(N>=1)
	{
	 N = N / 10;
	 t++ ;
	}
	return t;
}


int main(void)
{
	int n;
	scanf("%d",&n);

	printf("%d\n",fac_bit_count(n));

	return 0;
}
