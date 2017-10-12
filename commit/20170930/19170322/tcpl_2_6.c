#include<stdio.h>
#include<assert.h>

unsigned setbits(unsigned x,int p, int n,unsigned y)
{
    unsigned t;/*unchanged lower bits*/
    assert(p>=n);
    t=x&~(~0<<(p-n+1));
    x>>=p+1;
    x<<=n;
    x|=y&~(~0<<n);
    x<<=(p-n+1);
    x|=t;
    return x;

}
int main()
{
int x=9,y=10;
int p=2,n=2;
printf("%u\n",setbits(x,p,n,y));
return 0;
}	
