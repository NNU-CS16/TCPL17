#include<stdio.h>
unsigned  setbits(unsigned int x,unsigned int y,int p,int n)
{
	return x & ~(~(~0 << n) << (p+1-n)) |
	       (y & ~(~0 << n)) << (p+1-n);
}

int main()
{
	unsigned int  x,y;
	int p,n;
	printf("input the value of x,y,p,n.(x>=p>=n,y>=p>=n)");
	scanf("%d%d%d%d",&x,&y,&p,&n);
	int q;
	q=setbits(x,y,p,n);
	printf("%d\n",q);
	return 0;
}


