/*假设最右边一位是第0位*/
#include<stdio.h>
unsigned rightrot(unsigned x, int n);
int main()
{
unsigned x;int n;
scanf("%u%d",&x,&n);
printf("%d",rightrot(x,n));
}
	unsigned rightrot(unsigned x, int n)
{
	return x>>n | (~(~0<<n) &x)<< sizeof(x)*4-n;
}
