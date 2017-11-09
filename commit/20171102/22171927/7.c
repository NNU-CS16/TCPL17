#include <stdio.h>
int GCD_recursive(int m,int n);

int main()
{
    int a,b;
    printf("Please input a,b:");
    scanf("%d%d",&a,&b);
    GCD_recursive(a,b);
    return 0;
}

int GCD_recursive(int m,int n)
{
    int a,b;
    if(n>m)
    { 
        b=m;
        m=n;
        n=b;
    }
    do
    {
        a=m%n;
        m=n;
        n=a;
    }
    while(a!=0);
    printf("%d",m);
}

     
