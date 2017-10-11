/*假设最右边一位是第0位*/
#include<stdio.h>
unsigned setbits(unsigned x,int p,int n,unsigned y);
int main()
{
int p,n;
unsigned x,y;
scanf("%u%d%d%u",&x,&p,&n,&y);
printf("%d\n",setbits(x,p,n,y));
return 0;
}
	unsigned setbits(unsigned x,int p,int n,unsigned y)
{
	return (((~0 << n) << p)|~(~0 << p))&x|(~(~0<<n)&y)<<p;
}
