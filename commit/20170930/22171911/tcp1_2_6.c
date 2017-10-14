#include<stdio.h>
/*setbits:get n bits from position p */
unsigned setbits(unsigned x,int p,int n,unsigned y)

{
return (x>>(p+1-n)&y>>(n));
}
int main( )
{
int x,p,n,y;
scanf("%d%d%d%d",x,p,y,n);
return 0;
}
