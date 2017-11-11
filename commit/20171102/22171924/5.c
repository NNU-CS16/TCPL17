#include<stdio.h>
int fac_bit_count(int n)
{
    int i,a=1,b=0;
    for(i=1;i<=n;i++)
    a=a*i;
    for(;a!=0;a/=10)
    b++;
    return a;
}
    int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",fac_bit_count(n));
    return 0;
}
