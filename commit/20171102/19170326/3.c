#include<stdio.h>
int is_pow2(int n)
{
	int c;
	c=n&(n-1);
	if(c==0)
	return 0;
	else
	return -1;
}
int main()
{
	int m;
	scanf("%d",&m);
	printf("%d",is_pow2(m));
	return 0;
}
