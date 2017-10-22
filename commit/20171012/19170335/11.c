#include<stdio.h>
int main()
{
    int n,a,b,c;

    scanf("%d",&n);
    
    a=n+1;
    b=n+2;
    c=n+3;

    printf("%d%d%d %d%d%d %d%d%d %d%d%d %d%d%d %d%d%d\n",n,a,b,n,a,c,n,b,a,n,b,c,n,c,a,n,c,b);
    printf("%d%d%d %d%d%d %d%d%d %d%d%d %d%d%d %d%d%d\n",a,n,b,a,n,c,a,b,n,a,b,c,a,c,n,a,c,b);
    printf("%d%d%d %d%d%d %d%d%d %d%d%d %d%d%d %d%d%d\n",b,n,a,b,n,c,b,a,n,b,a,c,b,c,n,b,c,a);
    printf("%d%d%d %d%d%d %d%d%d %d%d%d %d%d%d %d%d%d\n",c,n,a,c,n,b,c,a,n,c,a,b,c,b,n,c,b,a);

    return 0;
}
