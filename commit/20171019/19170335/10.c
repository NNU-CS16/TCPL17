#include <stdio.h>
int main()
{
    long long int a,b,i;
    int c,d;
    long long int p=1;
    scanf("%lld%lld%d",&a,&b,&c);
    for(i=1;i<=b;i++)
    p=a*p;

    d=p%c;
    printf("%d\n",d);

    return 0;
}

