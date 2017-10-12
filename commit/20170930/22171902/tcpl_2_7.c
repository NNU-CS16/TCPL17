#include<stdio.h> 
unsigned invert(unsigned int x,int p,int n)
{
	return x ^ (~(~0 << n) << (p+1-n));
}
int main()
{
 	unsigned int x;
	int p,n;
	printf("input the value of x,p,n");
	scanf("%d%d%d",&x,&p,&n);
	int s;
	s=invert(x,p,n);
	printf("%d\n",s);
	return 0;
}
