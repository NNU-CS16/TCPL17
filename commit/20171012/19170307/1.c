#include<stdio.h>
int main()
{
    int n,sum=0;
    for(n=2;n<=100;n=n+2)
    sum=sum+n;
    printf("%d",sum);
    return 0;
}
