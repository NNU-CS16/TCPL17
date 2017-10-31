#include<stdio.h>
long BitLength(long x)
{
    long d=0;
    while(x>0)
    {
        x>>=1;
        d++;
    }
    return d;
}
long BitAt(long x,long i)
{
    return (x&(1<<(i-1)));
}
int main()
{   double y;
    long a,b,n,i;
    long  __int64 y;
    while(scanf("%ld %ld %ld",&a,&b,&n)==3)
    {
        y=1;
        for(i=BitLength(b);i>0;i--)
        {
            y=(y*y)%n;
            if(BitAt(b,i)>0)
                y=(y*a)%n;
        }
        printf("%ld\n",y);
    }
    return 1;
}
 
 
//计算幂取模a^b mod n, O(logb)
int modular_exponent(int a,int b,int n)
{ //a^b mod n
    int ret=1;
    for (;b;b>>=1,a=a*a%n)
    if (b&1)
        ret=ret*a%n;
    return ret;
}
