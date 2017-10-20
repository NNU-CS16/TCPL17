#include<stdio.h>



unsigned rightrot(unsigned x,int n)
{
	return (x & (~0<<n)^x)<<(sizeof(int)*8-n)|(x>>n);
}


	int main()
{
	unsigned x=64;
	int n=3;
	printf("%u\n",rightrot(x,n));

	return 0;
}

