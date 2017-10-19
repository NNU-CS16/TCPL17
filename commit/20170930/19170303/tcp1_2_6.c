/*setbits:将x中从第p位开始的n个位设置为y中最右边n 位的值，其余不变*/
#include<stdio.h>
unsigned setbits(unsigned x,int p, int n,unsigned y)
{
return x&~(~(~0<<n)<<(p+1-n))|(y&~(~0<<n))<<(p+1-n);
}


int main()
{
 int x=90,y=42,p=4,n=3,r;
 r=setbits(x,p,n,y);
 printf("%d\n",r);
 return 0;


}
