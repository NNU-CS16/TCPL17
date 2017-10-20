#include<stdio.h>

unsigned setbits(unsigned x, int p, int n,unsigned y)
{
	return x & ~(~(~0 << n) << (p+1-n)) | (y & ~(~0 << n)) << (p+1-n);

}


int main()
{
	unsigned x = 66,y = 36;
	int p = 6,n = 3,r;

	r = setbits(x, p, n, y);
	printf("%d\n", r);

	return 0;

}
