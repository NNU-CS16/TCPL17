#include<stdio.h>
int main()
{
    int n,sum=0;
    for(n=1;n<=99;n+=3)
    sum+=n*(n+1)*(n+2);
    printf("%d",sum);
    return 0;
}
