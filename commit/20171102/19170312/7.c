#include<stdio.h>
int GCD_recursive(int m,int n)
{
    int t;
    if(m<n){m=t;m=n;n=t;}
    if(m%n==0){return n;}
    else {return GCD_recursive(n,m%n);}
}
int GCD_iterative(int m,int n)
{
    int t,r;
    if(m<n){m=t;m=n;n=t;}
    for(;r!=0;)
    {
        r=m%n;
        m=n;
        n=r;
    }
    return m;
}
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d %d\n",GCD_recursive(m,n),GCD_iterative(m,n));
    return 0;
}
