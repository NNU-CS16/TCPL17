#include <stdio.h>

int fac_bit_count(int n)
{
	int i,sum,a;
	for(i=1,sum=1;i<=n,i++;)
		sum=sum*(i+1);
	

	for(a=0,sum>0;a++;)
		sum/=10;
	return a;
}

int main()
{
	long int n;
	scanf("%d",&n);
	printf(%d\n,fac_bit_count(n));
	return 0;
}

			
