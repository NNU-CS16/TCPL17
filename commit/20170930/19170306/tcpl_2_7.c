/*假设最右边一位是第0位*/
#include<stdio.h>
unsigned invert(unsigned x,int p,int n);
int main()
{
unsigned x;
int p , n ;
scanf("%u%d%d",&x,&p,&n);
printf("%d\n",invert(x,p,n));
return 0;
}
	unsigned invert(unsigned x,int p,int n)
{
	return( (~0 << n+p)|~(~0<< p)) &x| (~x & (~(~0<<n)<<p));
}
