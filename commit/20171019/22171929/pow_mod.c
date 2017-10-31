#include <stdio.h>
#include <math.h>
int mod(int p, int c);
int main()
{
    int a,b,c,p,x;
    scanf("%d%d%d",&a,&b,&c);
    p=pow(a,b);
    x=mod(p,c);
    printf("%d\n",x);
    return 0;
}
    int mod(int p, int c)
{
    return p%c;
}
