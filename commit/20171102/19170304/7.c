#include<stdio.h>
int GCD_recursive(int m,int n);
int main()
{
    int m,n;
    printf("Please input m(m>o)and n(n>0):");
    scanf("%d%d",&m,&n);
    
    GCD_recursive(m,n);

    return 0;
}

int GCD_recursive(int m,int n)
{
    if(m%n==0)
    printf("%d\n",n);
    else 
    return GCD_recursive(n,m%n);
}

