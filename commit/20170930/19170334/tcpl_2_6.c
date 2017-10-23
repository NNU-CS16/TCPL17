#include <stdio.h>

unsigned setbits(unsigned x,unsigned y,int p,int n)

{
	return x&~(~(~0<<n)<<(p-n+1))|(y&~(~0<<n))<<(p-n+1);
}

int main()
{
	unsigned int i;
	unsigned int j;
	int p;
	int n;
	int r;
	printf("Please input the number of i,j,p,n.\n");
	scanf("%u%u%d%d",&i,&j,&p,&n);
	r=setbits(i,j,p,n);
	printf("%d\n,r");
	return 0;
}
