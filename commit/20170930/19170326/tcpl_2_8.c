#include<stdio.h>
unsigned rightrot(unsigned x,int n)
{
unsigned y;
int wordlength(void);
if((n=n%wordlength())>0)
{
	y=~(~0<<n)&x;
	y=y<<(wordlength()-n);
	x=x>>n;
	x=x|y;
}
return x;
}

