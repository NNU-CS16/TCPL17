#include<stdio.h>
int main()
{
    int i,n=1;
    int sum=0;

    for(i=1;i<=10;i++)
{
    n=n*i;
    sum=sum+n;
}
    printf("%d\n",sum);
    return 0;
}
