#include <stdio.h>
unsigned invert(unsigned x,int p,int n)
{
	return x^(~(~0<<n)<<(p-n+1));
}
int main()
{
	unsigned int x;
	unsigned int s;
	int p;
	int n;
	printf("Please input the numbers of x,p,n.\n");
	scanf("%u%d%d",&x,&p,&n);
	s=invert(x,p,n);
	printf("%u\n",s);
	return 0;
	
}
