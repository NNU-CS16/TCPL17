#include <stdio.h>

int fac_bit_count(int n);

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",fac_bit_count(n));

	return 0;
}

int fac_bit_count(int n)
{
	int i,sum,k;
	for(i=1,sum=1;i<n;i++)
	   sum=sum*(i+1);

	for(k=0;sum>0;k++)
	   sum/=10;

	return k;
}
	   
